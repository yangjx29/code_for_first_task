int main () {
    char iZg4PqU8mIeK [(386 - 286)];
    char a [(257 - 157)];
    gets (a);
    int mVI8QGH;
    int HC8WvV;
    int m0OTfVn;
    char N86ZQjhpJA;
    char b [(470 - 370)];
    gets (b);
    int Nwrma5;
    int chzbL8U67qd;
    char QDGH4eUkh7Ni [(294 - 293)];
    int E3bSDaqt;
    char bjU3RmWlS [(851 - 751)];
    gets (bjU3RmWlS);
    chzbL8U67qd = (637 - 637);
    m0OTfVn = strlen (a);
    Nwrma5 = strlen (b);
    for (; m0OTfVn > chzbL8U67qd;) {
        sprintf (QDGH4eUkh7Ni, "%c", a[chzbL8U67qd]);
        strcpy (iZg4PqU8mIeK, QDGH4eUkh7Ni);
        for (mVI8QGH = 1; Nwrma5 > mVI8QGH; mVI8QGH++) {
            sprintf (QDGH4eUkh7Ni, "%c", a[chzbL8U67qd + mVI8QGH]);
            strcat (iZg4PqU8mIeK, QDGH4eUkh7Ni);
        }
        mVI8QGH = strcmp (iZg4PqU8mIeK, b);
        if (!((162 - 162) != mVI8QGH)) {
            chzbL8U67qd = chzbL8U67qd + Nwrma5;
            printf ("%s", bjU3RmWlS);
            break;
        }
        else {
            printf ("%c", a[chzbL8U67qd]);
            chzbL8U67qd++;
        }
    }
    for (; chzbL8U67qd < m0OTfVn;) {
        printf ("%c", a[chzbL8U67qd]);
        chzbL8U67qd++;
    }
    return (483 - 483);
}

