win32 {
    PYTHON_VERSION_CMD = $$system(python --version)
    PYTHON_INSTALLED = $$system(echo.$$PYTHON_VERSION_CMD|findstr /R /C:"Python.3" >nul 2>&1 && echo True || echo False)
    message(Is Python installed in your os: $$PYTHON_INSTALLED)

    equals(PYTHON_INSTALLED, True) {
        message(Python is installed - build started)
        TEMPLATE = subdirs

        SUBDIRS = src extensions
        tests.depends += src extensions
        extensions.depends += src
        examples.depends += src extensions
    }

    equals(PYTHON_INSTALLED, False) {
        message(Python is not installed - build aborted)
    }
}

unix {
    PYTHON_VERSION_CMD = $$system(python3 --version)
    isEqual($$system({$$PYTHON_VERSION_CMD:0:8}),Python 3) {
        PYTHON_INSTALLED = True
    } else {
        PYTHON_INSTALLED = False
    }
    message(Is Python installed in your os: $$PYTHON_INSTALLED)

    equals(PYTHON_INSTALLED, True) {
        message(Python is installed - build started)
        TEMPLATE = subdirs

        SUBDIRS = src extensions
        tests.depends += src extensions
        extensions.depends += src
        examples.depends += src extensions
    }

    equals(PYTHON_INSTALLED, False) {
        message(Python is not installed - build aborted)
    }
}


