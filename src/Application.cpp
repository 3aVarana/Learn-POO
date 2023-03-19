#include "Application.h"
#include "Library.h"

void Application::run()
{
    Library library;
    library.loadData();
    library.showMenu();
}
