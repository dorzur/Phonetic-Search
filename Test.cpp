/**
 * unit test for Phonetic Finder task
 * AUTHORS: Anil Turgeman Matan Tsabari
 * 
 * */

#include "PhoneticFinder.hpp"
#include "doctest.h"
#include <string>

using namespace phonetic;
using namespace std;

TEST_CASE("Test replacement of v and w") {
    string text = "vows wave wow view";
    CHECK(find(text, "vows") == string("vows"));
    CHECK(find(text, "ovws") == string("vows"));
    CHECK(find(text, "VoWs") == string("vows"));
    CHECK(find(text, "vaww") == string("wave"));
    CHECK(find(text, "wesv") == string("wave"));
    CHECK(find(text, "wvae") == string("wave"));
    CHECK(find(text, "waev") == string("wave"));
    CHECK(find(text, "evaw") == string("wave"));
    CHECK(find(text, "wow") == string("wow"));
    CHECK(find(text, "oww") == string("wow"));
    CHECK(find(text, "wo") == string("wow"));
    CHECK(find(text, "view") == string("view"));
    CHECK(find(text, "weiv") == string("view"));
    CHECK(find(text, "vwie") == string("view"));
    CHECK(find(text, "ivew") == string("view"));
    /* Add more checks here */
}//15

TEST_CASE("Test replacement of b, f and p") {
    string text = "bob happy forbman";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    CHECK(find(text, "bop") == string("bob"));
    CHECK(find(text, "pof") == string("bob"));
    CHECK(find(text, "bop") == string("bob"));
    CHECK(find(text, "pob") == string("bob"));
    CHECK(find(text, "fop") == string("bob"));
    CHECK(find(text, "porbman") == string("forbman"));
    CHECK(find(text, "borbman") == string("forbman"));
    CHECK(find(text, "porpman") == string("forbman"));
    CHECK(find(text, "forfman") == string("forbman"));
    CHECK(find(text, "porpman") == string("forbman"));
    /* Add more checks here */
}//14

TEST_CASE("Test replacement of g and j") {
    string text = "jager jigs goge jong";
    CHECK(find(text, "gager") == string("jager"));
    CHECK(find(text, "gajer") == string("jager"));
    CHECK(find(text, "jajer") == string("jager"));
    CHECK(find(text, "gajer") == string("jager"));
    CHECK(find(text, "jijs") == string("jigs"));
    CHECK(find(text, "jigs") == string("jigs"));
    CHECK(find(text, "gigs") == string("jigs"));
    CHECK(find(text, "gijs") == string("jigs"));
    CHECK(find(text, "goge") == string("goge"));
    CHECK(find(text, "joge") == string("goge"));
    CHECK(find(text, "joje") == string("goge"));
    CHECK(find(text, "goje") == string("goge"));
    CHECK(find(text, "jonj") == string("jong"));
    CHECK(find(text, "gonj") == string("jong"));
    CHECK(find(text, "gong") == string("jong"));
    CHECK(find(text, "jong") == string("jong"));
    /* Add more checks here */
}//16

TEST_CASE("Test replacement of c, k and q") {
    string text = "quicks quacker quicker quickly";
    CHECK(find(text, "quicks") == string("quicks"));
    CHECK(find(text, "quikcs") == string("quicks"));
    CHECK(find(text, "cuicks") == string("quicks"));
    CHECK(find(text, "quiqks") == string("quicks"));
    CHECK(find(text, "kuikks") == string("quicks"));
    CHECK(find(text, "quicqs") == string("quicks"));
    CHECK(find(text, "quacker") == string("quacker"));
    CHECK(find(text, "quaqcer") == string("quacker"));
    CHECK(find(text, "quakcer") == string("quacker"));
    CHECK(find(text, "kuacker") == string("quacker"));
    CHECK(find(text, "cuacqer") == string("quacker"));
    CHECK(find(text, "quicker") == string("quicker"));
    CHECK(find(text, "quikcer") == string("quicker"));
    CHECK(find(text, "quiccer") == string("quicker"));
    CHECK(find(text, "cuicker") == string("quicker"));
    CHECK(find(text, "kuicker") == string("quicker"));
    CHECK(find(text, "quiqcly") == string("quickly"));
    CHECK(find(text, "kuicqly") == string("quickly"));
    CHECK(find(text, "cuickly") == string("quickly"));
    CHECK(find(text, "quickly") == string("quickly"));
    CHECK(find(text, "cuikqly") == string("quickly"));
    /* Add more checks here */
}//21

TEST_CASE("Test replacement of s and z") {
    string text = "amazon amazes dozens gizmos";
    CHECK(find(text, "amason") == string("amazon"));
    CHECK(find(text, "amazes") == string("amazes"));
    CHECK(find(text, "amases") == string("amazes"));
    CHECK(find(text, "amazez") == string("amazes"));
    CHECK(find(text, "amazes") == string("amazes"));
    CHECK(find(text, "dozens") == string("dozens"));
    CHECK(find(text, "dosenz") == string("dozens"));
    CHECK(find(text, "dozenz") == string("dozens"));
    CHECK(find(text, "dosens") == string("dozens"));
    CHECK(find(text, "gismos") == string("gizmos"));
    CHECK(find(text, "gizmoz") == string("gizmos"));
    CHECK(find(text, "gizmos") == string("gizmos"));
    CHECK(find(text, "gismoz") == string("gizmos"));
    /* Add more checks here */
}//13

TEST_CASE("Test replacement of d and t") {
    string text = "tod ted dot tad";
    CHECK(find(text, "dot") == string("tod"));
    CHECK(find(text, "dod") == string("tod"));
    CHECK(find(text, "tot") == string("tod"));
    CHECK(find(text, "det") == string("ted"));
    CHECK(find(text, "ded") == string("ted"));
    CHECK(find(text, "tet") == string("ted"));
    CHECK(find(text, "dod") == string("dot"));
    CHECK(find(text, "tod") == string("dot"));
    CHECK(find(text, "tot") == string("dot"));
    CHECK(find(text, "tat") == string("tad"));
    CHECK(find(text, "dad") == string("tad"));
    CHECK(find(text, "dat") == string("tad"));
    /* Add more checks here */
}//12

TEST_CASE("Test replacement of o and u") {
    string text = "auto foul four ";
    CHECK(find(text, "aoto") == string("auto"));
    CHECK(find(text, "autu") == string("auto"));
    CHECK(find(text, "fuol") == string("foul"));
    CHECK(find(text, "fool") == string("foul"));
    CHECK(find(text, "fuur") == string("four"));
    CHECK(find(text, "fuor") == string("four"));
    CHECK(find(text, "foor") == string("four"));
    /* Add more checks here */
}//7

TEST_CASE("Test replacement of i and y") {
    string text = "icy ivy yin";
    CHECK(find(text, "ycy") == string("icy"));
    CHECK(find(text, "yci") == string("icy"));
    CHECK(find(text, "ivi") == string("ivy"));
    CHECK(find(text, "yvi") == string("ivy"));
    CHECK(find(text, "yyn") == string("yin"));
    CHECK(find(text, "iyn") == string("yin"));
    /* Add more checks here */
}//6

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "We were on a break!";
    CHECK(find(text, "WE") == string("We"));
    CHECK(find(text, "wE") == string("We"));
    CHECK(find(text, "We") == string("We"));
    CHECK(find(text, "we") == string("We"));
    CHECK(find(text, "WERE") == string("were"));
    CHECK(find(text, "wErE") == string("were"));
    CHECK(find(text, "WeRe") == string("were"));
    CHECK(find(text, "were") == string("were"));
    CHECK(find(text, "BREAK") == string("break"));
    CHECK(find(text, "break") == string("break"));
    CHECK(find(text, "brEAk") == string("break"));
    CHECK(find(text, "BreaK") == string("break"));
    CHECK(find(text, "bReak") == string("break"));
    /* Add more checks here */
}//13. overall 117 tests
