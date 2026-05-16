#include <iostream>
#include <xmmintrin.h>
#include <iostream>
#include <stdlib.h>

#include "Library.h"
#include "Publication.h"

#include "Magazine.h"
#include "Exceptions.h"
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
    // Дополнительные
    Library TestLib2;
    TestLib2.setName("BestLib2");
    Publication ABCbook;
    Magazine Vogue("Vogue", "FR.blablabla", 2026);
    TestLib2.addPublication(&ABCbook);
    TestLib2.addPublication(&Vogue);
    Vogue.addArticle("Vogue de Francé");
    Vogue.addArticle("Serg");
    TestLib2.showPublications();
    //Работает стабильно



    // Тестирование Magazine
    cout << "\n--- Тестирование Magazine ---\n";
    try {
        Magazine badYear("Наука", "Иванов", -5);
    }
    catch (const EditionYearException& e) {
        cout << e.Message() << endl;
    }
    Magazine emptyName("", "", 2023);
    cout << emptyName.formDescription() << endl;
    Magazine normal("Космос", "Петров", 2023);
    normal.addArticle("Черные дыры");
    normal.addArticle("Квантовая физика");
    cout << normal.formDescription() << endl;

    return 0;
}