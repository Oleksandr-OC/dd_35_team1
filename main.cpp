#include <iostream>
#include <xmmintrin.h>
#include <iostream>
#include <stdlib.h>

#include "Library.h"
#include "Publication.h"

using std::cout;
using std::endl;


int main()
{

    Library TestLib;
    TestLib.setName("BestLib");

    Publication CCbook;
    CCbook.setName("C/C++ Bestiary");
    CCbook.setAuthor("Linus");
    CCbook.setYear(1990);

    Publication Pythonbook;
    Pythonbook.setName("Python Guide");
    Pythonbook.setAuthor("Sergay");
    Pythonbook.setYear(2015);

    TestLib.addPublication(&CCbook);
    TestLib.addPublication(&Pythonbook);
    TestLib.showPublications();
    TestLib.deletePublication("Pythonbook");
    TestLib.deletePublication("Python Guide");
    TestLib.showPublications();
}


