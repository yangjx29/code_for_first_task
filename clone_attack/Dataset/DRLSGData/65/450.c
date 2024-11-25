int main () {
    int DbUil8o;
    int XlKs6n;
    int AszycGk;
    int DsDe4528u;
    int MDJdK3PyI5;
    int JZvYiBjyA;
    DbUil8o = 0;
    XlKs6n = 0;
    scanf ("%d", &AszycGk);
    for (DsDe4528u = 0; DsDe4528u < AszycGk; DsDe4528u++) {
        scanf ("%d %d", &MDJdK3PyI5, &JZvYiBjyA);
        if (MDJdK3PyI5 == 1 && JZvYiBjyA == 0 || !(0 != MDJdK3PyI5) && JZvYiBjyA == 2 || MDJdK3PyI5 == 2 && JZvYiBjyA == 1) {
            XlKs6n++;
        }
        if (MDJdK3PyI5 == 0 && JZvYiBjyA == 1 || MDJdK3PyI5 == 1 && JZvYiBjyA == 2 || MDJdK3PyI5 == 2 && JZvYiBjyA == 0) {
            DbUil8o++;
        }
    }
    if (DbUil8o > XlKs6n)
        ;
    else if (DbUil8o < XlKs6n)
        ;
    else
        ;
    return 0;
}

