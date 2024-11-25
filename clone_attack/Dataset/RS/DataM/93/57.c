int main () {
    int zCREus9niQ;
    scanf ("%d", &zCREus9niQ);
    if (!(0 != zCREus9niQ % 3)) {
        if (!(0 != zCREus9niQ % 5)) {
            if (zCREus9niQ % 7 == 0)
                printf ("3 5 7");
            else
                ;
        }
        else if (zCREus9niQ % 7 == 0)
            ;
        else
            printf ("3");
    }
    else if (zCREus9niQ % 3 != 0) {
        if (zCREus9niQ % 5 == 0) {
            if (zCREus9niQ % 7 == 0)
                printf ("5 7");
            else
                ;
        }
        else if (zCREus9niQ % 7 == 0)
            ;
        else
            printf ("n");
    }
    return 0;
}

