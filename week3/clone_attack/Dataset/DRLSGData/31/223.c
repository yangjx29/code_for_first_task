struct   student {
    char EQeUZ70mfM [(630 - 610)];
    char Atdef0i [(102 - 82)];
    char Um73Q9kgw1;
    int en9ab5qMB6j;
    float dbLJtDy;
    char zAeYGQsCjWf5 [(487 - 467)];
    struct   student *lMg1dKSYp7x3;
};
struct   student *XjsVk04nZCuh (void ) {
    struct   student *qMgQ2jy0J7s;
    struct   student *DbEZTw6y;
    struct   student *T1yD6mrj5;
    qMgQ2jy0J7s = (struct   student *) malloc (len);
    qMgQ2jy0J7s->lMg1dKSYp7x3 = NULL;
    scanf ("%s %s %c %d %f %s", qMgQ2jy0J7s->EQeUZ70mfM, qMgQ2jy0J7s->Atdef0i, &qMgQ2jy0J7s->Um73Q9kgw1, &qMgQ2jy0J7s->en9ab5qMB6j, &qMgQ2jy0J7s->dbLJtDy, qMgQ2jy0J7s->zAeYGQsCjWf5);
    do {
        DbEZTw6y = (struct   student *) malloc (len);
        scanf ("%s %s %c %d %f %s", DbEZTw6y->EQeUZ70mfM, DbEZTw6y->Atdef0i, &DbEZTw6y->Um73Q9kgw1, &DbEZTw6y->en9ab5qMB6j, &DbEZTw6y->dbLJtDy, DbEZTw6y->zAeYGQsCjWf5);
        DbEZTw6y->lMg1dKSYp7x3 = qMgQ2jy0J7s;
        qMgQ2jy0J7s = DbEZTw6y;
    }
    while (strcmp (DbEZTw6y->EQeUZ70mfM, "end") != (622 - 622));
    T1yD6mrj5 = DbEZTw6y->lMg1dKSYp7x3;
    return (T1yD6mrj5);
}

void  lvpJxzrGPm (struct   student *T1yD6mrj5) {
    struct   student *GdlWZOg0q4;
    GdlWZOg0q4 = T1yD6mrj5;
    do {
        printf ("%s %s %c %d %g %s\n", GdlWZOg0q4->EQeUZ70mfM, GdlWZOg0q4->Atdef0i, GdlWZOg0q4->Um73Q9kgw1, GdlWZOg0q4->en9ab5qMB6j, GdlWZOg0q4->dbLJtDy, GdlWZOg0q4->zAeYGQsCjWf5);
        GdlWZOg0q4 = GdlWZOg0q4->lMg1dKSYp7x3;
    }
    while (GdlWZOg0q4 != NULL);
}

void  main () {
    struct   student *T1yD6mrj5;
    lvpJxzrGPm (T1yD6mrj5);
    T1yD6mrj5 = XjsVk04nZCuh ();
}

