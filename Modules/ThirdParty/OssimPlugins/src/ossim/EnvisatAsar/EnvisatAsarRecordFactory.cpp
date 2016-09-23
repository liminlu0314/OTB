//----------------------------------------------------------------------------
//
// "Copyright Centre National d'Etudes Spatiales"
//
// License:  LGPL
//
// See LICENSE.txt file in the top level directory for more details.
//
//----------------------------------------------------------------------------
// $Id$

#include <EnvisatAsar/EnvisatAsarRecordFactory.h>

namespace ossimplugins
{
EnvisatAsarRecordFactory::EnvisatAsarRecordFactory()
{
}

EnvisatAsarRecordFactory::~EnvisatAsarRecordFactory()
{
}

EnvisatAsarRecord* EnvisatAsarRecordFactory::Instantiate(std::string id)
{
	EnvisatAsarRecord* record = _availableRecords[id];
	if(record == NULL)
	{
		return NULL;
	}
	else
	{
		return record->Instantiate();
	}
}

void EnvisatAsarRecordFactory::RegisterRecord(std::string id, EnvisatAsarRecord * record)
{
	_availableRecords[id] = record;
}
}
