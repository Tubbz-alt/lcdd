// $Id: NistElementsDump.hh,v 1.7 2013-11-14 00:47:23 jeremy Exp $

#ifndef LCDD_UTIL_NISTELEMENTSDUMP_HH
#define LCDD_UTIL_NISTELEMENTSDUMP_HH 1

// STL
#include <iostream>
#include <string>

/**
 * @brief Utility class for dumping NIST element data from Geant4 to XML output.
 */
class NistElementsDump {

private:
    static std::string abbrevs[];
    static std::string names[];
    static int nelements;

private:

    /**
     * Class constructor.
     * Should not be instantiated.
     */
    NistElementsDump();

public:

    /**
     * Write XML for elements to an output file.
     * @param[in] filename The output file name.
     */
    static void writeXml(const std::string& filename);

    /**
     * Print XML for elements to an output stream.
     * @param[in] out The output stream.
     */
    static void printXml(std::ostream& out);
};

#endif
