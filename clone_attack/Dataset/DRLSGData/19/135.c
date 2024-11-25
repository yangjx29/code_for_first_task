int main () {
    int aXCqyalxQM;
    int XyYQuwjvg41U;
    char ykyIZ9tD0j [(552 - 502)] [(553 - 533)];
    char vH4RNni5 [(451 - 431)];
    int XdfiKS8mYvQ;
    char Xs08jrI [(1002 - 982)];
    char B6PHSXu3r;
    {
        XyYQuwjvg41U = (923 - 743) - (1167 - 987);
        for (; (406 - 356) > XyYQuwjvg41U;) {
            for (XdfiKS8mYvQ = (224 - 224); (861 - 841) > XdfiKS8mYvQ; XdfiKS8mYvQ = XdfiKS8mYvQ +(315 - 314))
                ykyIZ9tD0j[XyYQuwjvg41U][XdfiKS8mYvQ] = '\0';
            XyYQuwjvg41U = XyYQuwjvg41U +(599 - 598);
        }
    }
    XdfiKS8mYvQ = (675 - 675);
    XyYQuwjvg41U = (277 - 277);
    for (; (769 - 768);) {
        B6PHSXu3r = getchar ();
        if (B6PHSXu3r != '\n' && B6PHSXu3r != ' ') {
            ykyIZ9tD0j[XyYQuwjvg41U][XdfiKS8mYvQ] = B6PHSXu3r;
            XdfiKS8mYvQ = XdfiKS8mYvQ +1;
        }
        else {
            XdfiKS8mYvQ = (882 - 882);
            XyYQuwjvg41U = XyYQuwjvg41U +1;
        }
        if (!('\n' != B6PHSXu3r))
            break;
    }
    scanf ("%s\n%s", Xs08jrI, vH4RNni5);
    for (aXCqyalxQM = (195 - 195); XyYQuwjvg41U > aXCqyalxQM; aXCqyalxQM = aXCqyalxQM + 1) {
        if (!strcmp (ykyIZ9tD0j[aXCqyalxQM], Xs08jrI))
            strcpy (ykyIZ9tD0j[aXCqyalxQM], vH4RNni5);
    }
    {
        aXCqyalxQM = (884 - 45) - (1543 - 704);
        for (; aXCqyalxQM < XyYQuwjvg41U;) {
            if (!aXCqyalxQM)
                printf ("%s", ykyIZ9tD0j[aXCqyalxQM]);
            else
                printf (" %s", ykyIZ9tD0j[aXCqyalxQM]);
            aXCqyalxQM = aXCqyalxQM + 1;
        }
    }
    return (395 - 395);
}

