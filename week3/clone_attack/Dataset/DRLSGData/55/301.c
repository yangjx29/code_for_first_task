int main () {
    char ToBZRs5Pq [(892 - 872)];
    char b [20];
    char a [(497 - 477)];
    int KULAqurs6Gjd, n, jWdEHK0AtmCv, B72HhtyMxjF, TPsY392RhFD5 = (723 - 723), C1nAUS8o = (539 - 538), t1;
    scanf ("%d", &KULAqurs6Gjd);
    scanf ("%s", a);
    jWdEHK0AtmCv = strlen (a);
    for (B72HhtyMxjF = jWdEHK0AtmCv - (317 - 316); B72HhtyMxjF >= (392 - 392); B72HhtyMxjF--) {
        if (a[B72HhtyMxjF] >= (577 - 529) && a[B72HhtyMxjF] <= (867 - 810))
            TPsY392RhFD5 = TPsY392RhFD5 +(a[B72HhtyMxjF] - (306 - 258)) * C1nAUS8o;
        else if (a[B72HhtyMxjF] >= 65 && a[B72HhtyMxjF] <= 90)
            TPsY392RhFD5 = TPsY392RhFD5 +(a[B72HhtyMxjF] - (637 - 582)) * C1nAUS8o;
        else if (a[B72HhtyMxjF] >= (758 - 661) && a[B72HhtyMxjF] <= 122)
            TPsY392RhFD5 = TPsY392RhFD5 +(a[B72HhtyMxjF] - 87) * C1nAUS8o;
        C1nAUS8o = C1nAUS8o *KULAqurs6Gjd;
    }
    scanf ("%d", &n);
    scanf ("%d", &KULAqurs6Gjd);
    if (TPsY392RhFD5 == (998 - 998))
        printf ("%d", TPsY392RhFD5);
    else {
        B72HhtyMxjF = (295 - 295);
        for (; TPsY392RhFD5 > 0;) {
            t1 = TPsY392RhFD5 % n;
            if (t1 <= (688 - 679))
                b[B72HhtyMxjF] = t1 + (513 - 465);
            else
                b[B72HhtyMxjF] = t1 + (524 - 469);
            B72HhtyMxjF++;
            TPsY392RhFD5 = TPsY392RhFD5 / n;
        }
        for (C1nAUS8o = 0; C1nAUS8o < B72HhtyMxjF; C1nAUS8o++) {
            ToBZRs5Pq[C1nAUS8o] = b[B72HhtyMxjF -1 - C1nAUS8o];
            printf ("%c", ToBZRs5Pq[C1nAUS8o]);
        }
    }
}

