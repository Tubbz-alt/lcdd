// $Header: /nfs/slac/g/lcd/cvs/lcdroot/lcdd/include/lcdd/detectors/TrackerHitProcessor.hh,v 1.3 2013-11-14 00:47:20 jeremy Exp $

#ifndef LCDD_DETECTORS_TRACKERHITPROCESSOR_HH
#define LCDD_DETECTORS_TRACKERHITPROCESSOR_HH 1

#include "lcdd/detectors/TrackerSD.hh"

/**
 * @brief The interface for hit processing in trackers.
 */
class TrackerHitProcessor: public HitProcessor {
public:

    /**
     * Class constructor.
     * @param[in] tracker Pointer to TrackerSD.
     */
    TrackerHitProcessor(TrackerSD* tracker);

    /**
     * Class destructor.
     */
    virtual ~TrackerHitProcessor();

    /**
     * Process hits to produce steps.
     * @param[in] step The G4Step object.
     * @return True if hits were created or modified; false if not.
     */
    virtual bool processHits(G4Step* step) = 0;

protected:

    TrackerSD* _tracker;
};

#endif
