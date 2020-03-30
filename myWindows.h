HWND staticDate, staticMonth, staticYear, staticHour, staticMinutes, staticSeconds;
HWND staticDateN, staticMonthN, staticYearN, staticHourN, staticMinutesN, staticSecondsN;
void myWindows(HINSTANCE hThisInstance, HWND hwnd) {
    CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "PC Hour",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        170,
        85,
        100,
        20,
        hwnd,
        NULL,
        hThisInstance,
        NULL
    );
    CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "Day: ",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        65,
        110,
        100,
        20,
        hwnd,
        NULL,
        hThisInstance,
        NULL
    );

   staticDate = CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        100,
        110,
        100,
        20,
        hwnd,
        (HMENU)STATIC_DATE,
        hThisInstance,
        NULL
    );

    CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "Month: ",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        150,
        110,
        100,
        20,
        hwnd,
        NULL,
        hThisInstance,
        NULL
    );

    staticMonth = CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        200,
        110,
        100,
        20,
        hwnd,
        (HMENU)STATIC_MONTH,
        hThisInstance,
        NULL
    );

    CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "Year: ",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        250,
        110,
        100,
        20,
        hwnd,
        NULL,
        hThisInstance,
        NULL
    );

    staticYear = CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        295,
        110,
        100,
        20,
        hwnd,
        (HMENU)STATIC_YEAR,
        hThisInstance,
        NULL
    );


    CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "Hour:",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        65,
        140,
        100,
        20,
        hwnd,
        NULL,
        hThisInstance,
        NULL
    );

    staticHour = CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        105,
        140,
        100,
        20,
        hwnd,
        (HMENU)STATIC_HOUR,
        hThisInstance,
        NULL
    );

    CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "Minutes:",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        150,
        140,
        100,
        20,
        hwnd,
        NULL,
        hThisInstance,
        NULL
    );

    staticMinutes = CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        208,
        140,
        100,
        20,
        hwnd,
        (HMENU)STATIC_MINUTES,
        hThisInstance,
        NULL
    );

    CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "Seconds:",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        250,
        140,
        100,
        20,
        hwnd,
        NULL,
        hThisInstance,
        NULL
    );

    staticSeconds = CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        313,
        140,
        100,
        20,
        hwnd,
        (HMENU)STATIC_SECONDS,
        hThisInstance,
        NULL
    );


    CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "Net Hour",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        170,
        185,
        100,
        20,
        hwnd,
        NULL,
        hThisInstance,
        NULL
    );



    CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "Day: ",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        65,
        210,
        100,
        20,
        hwnd,
        NULL,
        hThisInstance,
        NULL
    );

   staticDateN = CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        100,
        210,
        100,
        20,
        hwnd,
        (HMENU)STATIC_DATE,
        hThisInstance,
        NULL
    );

    CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "Month: ",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        150,
        210,
        100,
        20,
        hwnd,
        NULL,
        hThisInstance,
        NULL
    );

    staticMonthN = CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        200,
        210,
        100,
        20,
        hwnd,
        (HMENU)STATIC_MONTH,
        hThisInstance,
        NULL
    );

    CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "Year: ",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        250,
        210,
        100,
        20,
        hwnd,
        NULL,
        hThisInstance,
        NULL
    );

    staticYearN = CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        295,
        210,
        100,
        20,
        hwnd,
        (HMENU)STATIC_YEAR,
        hThisInstance,
        NULL
    );


    CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "Hour:",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        65,
        240,
        100,
        20,
        hwnd,
        NULL,
        hThisInstance,
        NULL
    );

    staticHourN = CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        105,
        240,
        100,
        20,
        hwnd,
        (HMENU)STATIC_HOUR,
        hThisInstance,
        NULL
    );

    CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "Minutes:",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        150,
        240,
        100,
        20,
        hwnd,
        NULL,
        hThisInstance,
        NULL
    );

    staticMinutesN = CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        208,
        240,
        100,
        20,
        hwnd,
        (HMENU)STATIC_MINUTES,
        hThisInstance,
        NULL
    );

    CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "Seconds:",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        250,
        240,
        100,
        20,
        hwnd,
        NULL,
        hThisInstance,
        NULL
    );

    staticSecondsN = CreateWindowExA (
        WS_EX_COMPOSITED|WS_EX_NOACTIVATE|WS_EX_NOPARENTNOTIFY,
        "Static",
        "",
        WS_CHILD|WS_VISIBLE|SS_SIMPLE,
        313,
        240,
        100,
        20,
        hwnd,
        (HMENU)STATIC_SECONDS,
        hThisInstance,
        NULL
    );
}
