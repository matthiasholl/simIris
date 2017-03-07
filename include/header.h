#include "reacParams.h"
#include "geoParams.h"
#include "nucleus.h"
#include "shieldClear.h"
#include "eloss.h"
#include "dwba.h"
#include "PTrack.h"
#include "YYHit.h"
#include "CsIHit.h"
#include "S3Hit.h"
#include "IDet.h"

using namespace TMath;

extern reacParams reacPrm;
extern geoParams geoPrm;
extern YYHit yd;
extern CsIHit csi;
extern S3Hit sd1;
extern S3Hit sd2;
extern PTrack hP;
extern PTrack lP;
extern PTrack decHP;
extern PTrack declP1;
extern PTrack declP2;
extern IDet det;
