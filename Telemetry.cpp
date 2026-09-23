// Copyright © 2026 Fenris Creations.
#include "Telemetry.h"


const CcpTelemetryCategory& RegisterTelemetryCategory()
{
	auto [category, ok] = CcpTelemetryCategoryRegister( "db", CcpColor::RebeccaPurple );
	if( !ok )
	{
		CCP_LOGWARN( "Could not register a telemetry category for db, no profiling zones will be emitted" );
	}
	return category;
}

const CcpTelemetryCategory& DbTelemetryCategory()
{
	static const CcpTelemetryCategory& category = RegisterTelemetryCategory();
	return category;
}
