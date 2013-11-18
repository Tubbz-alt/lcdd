// $Header: /nfs/slac/g/lcd/cvs/lcdroot/lcdd/include/lcdd/schema/cell_readout_2d.hh,v 1.7 2013-11-14 00:47:21 jeremy Exp $

#ifndef LCDD_SCHEMA_CELL_READOUT_2D_HH
#define LCDD_SCHEMA_CELL_READOUT_2D_HH 1

// LCDD
#include "CellReadout2DSegmentationType.hh"

// GDML
#include "Saxana/SAXObject.h"

/**
 * @brief The cell_readout_2d element from the schema.
 */
class cell_readout_2d: public SAXObject, public CellReadout2DSegmentationType {

public:

    /**
     * Class constructor.
     */
    cell_readout_2d() {
    }

    /**
     * Class destructor.
     */
    virtual ~cell_readout_2d() {
    }

    /**
     * Get the type of this SAXObject.
     * @return The type of this SAXObject.
     */
    virtual SAXObject::Type type() {
        return SAXObject::element;
    }
};

#endif
