// $Header: /nfs/slac/g/lcd/cvs/lcdroot/lcdd/src/lcdd/segmentation/ProjectiveZPlaneSegmentation.cc,v 1.2 2013-11-13 23:02:59 jeremy Exp $

// LCDD
#include "lcdd/segmentation/ProjectiveZPlaneSegmentation.hh"
#include "lcdd/detectors/ReadoutUtil.hh"

ProjectiveZPlaneSegmentation::ProjectiveZPlaneSegmentation(G4int ntheta, G4int nphi) :
        ProjectiveSegmentation(ntheta, nphi) {
}

ProjectiveZPlaneSegmentation::~ProjectiveZPlaneSegmentation() {
}

double ProjectiveZPlaneSegmentation::getRadius(const G4Step* aStep) {
    double zcell = getZ(aStep);
    double ctheta = ProjectiveSegmentation::getThetaDim(aStep);
    double rcyl = zcell * tan(ctheta);
    return rcyl;
}
/*
 double ProjectiveZPlaneSegmentation::getRadius(const G4StepPoint* aPreStepPoint)
 {
 double zcell = getZ(aPreStepPoint);
 double ctheta = ProjectiveSegmentation::getThetaDim(aPreStepPoint);
 double rcyl = zcell * tan(ctheta);
 return rcyl;
 }
 */

double ProjectiveZPlaneSegmentation::getZ(const G4Step* aStep) {
    G4ThreeVector gpos = ReadoutUtil::getVolumeGlobalPosition(aStep->GetPreStepPoint(), G4ThreeVector());
    return gpos.z();
}

/*
 double ProjectiveZPlaneSegmentation::getZ(const G4StepPoint* aPreStepPoint)
 {
 G4ThreeVector gpos = ReadoutUtil::getVolumeGlobalPosition(aPreStepPoint, G4ThreeVector());
 return gpos.z();
 }
 */
