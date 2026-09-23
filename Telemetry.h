// Copyright © 2026 Fenris Creations.
#ifndef DB_TELEMETRY_H
#define DB_TELEMETRY_H
#include <CcpTelemetry.h>


const CcpTelemetryCategory& DbTelemetryCategory();
#define DB_TELEMETRY_ZONE( zoneName )                                                                                     \
	TelemetryZone CCP_ANONYMOUS_VARIABLE( telemetryZone_ )( DbTelemetryCategory(), zoneName, __FILE__, __LINE__ )

#endif //DB_TELEMETRY_H
