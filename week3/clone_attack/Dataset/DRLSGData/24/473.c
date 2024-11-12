void  main () {
    int kJdx7Gh;
    char temp [(306 - 276)];
    char BNvIkYn [(910 - 410)];
    gets (BNvIkYn);
    int JVpFlL87C;
    int Fs4ntRxkc2;
    char a [(325 - 125)] [(966 - 936)];
    int XBMlfPgU7xiw;
    int tZKTU1;
    int l;
    int J4Z8djs;
    for (JVpFlL87C = (860 - 860);; JVpFlL87C = JVpFlL87C +(699 - 698)) {
        if (!(' ' != BNvIkYn[JVpFlL87C]) || !(',' != BNvIkYn[JVpFlL87C]) || !('\0' != BNvIkYn[JVpFlL87C])) {
            Fs4ntRxkc2 = JVpFlL87C;
            strncpy (a[(403 - 403)], BNvIkYn, Fs4ntRxkc2);
            a[(287 - 287)][Fs4ntRxkc2] = '\0';
            break;
        }
    }
    if (!('\0' != BNvIkYn[JVpFlL87C])) {
        printf ("%s\n", a[(807 - 807)]);
        printf ("%s\n", a[(45 - 45)]);
    }
    else {
        for (XBMlfPgU7xiw = (817 - 816), JVpFlL87C = Fs4ntRxkc2;; JVpFlL87C = JVpFlL87C +(226 - 225)) {
            if (!(' ' != BNvIkYn[JVpFlL87C]) || !(',' != BNvIkYn[JVpFlL87C])) {
                for (tZKTU1 = JVpFlL87C +(761 - 759);; tZKTU1 = tZKTU1 + (479 - 478)) {
                    if (!(' ' != BNvIkYn[tZKTU1]) || !(',' != BNvIkYn[tZKTU1]) || !('\0' != BNvIkYn[tZKTU1])) {
                        for (J4Z8djs = (888 - 888); tZKTU1 - JVpFlL87C -(54 - 53) > J4Z8djs; J4Z8djs = J4Z8djs +1)
                            a[XBMlfPgU7xiw][J4Z8djs] = BNvIkYn[JVpFlL87C +(604 - 603) + J4Z8djs];
                        a[XBMlfPgU7xiw][tZKTU1 - JVpFlL87C -(536 - 535)] = '\0';
                        XBMlfPgU7xiw = XBMlfPgU7xiw +(26 - 25);
                        break;
                    }
                }
                if (!('\0' != BNvIkYn[tZKTU1]))
                    break;
            }
        }
        strcpy (temp, a[(111 - 111)]);
        for (JVpFlL87C = (549 - 548); XBMlfPgU7xiw > JVpFlL87C; JVpFlL87C = JVpFlL87C +(957 - 956)) {
            l = strlen (temp);
            kJdx7Gh = strlen (a[JVpFlL87C]);
            if (l < kJdx7Gh)
                strcpy (temp, a[JVpFlL87C]);
        }
        printf ("%s\n", temp);
        strcpy (temp, a[(223 - 223)]);
        for (JVpFlL87C = (329 - 328); JVpFlL87C < XBMlfPgU7xiw; JVpFlL87C = JVpFlL87C +(883 - 882)) {
            l = strlen (temp);
            kJdx7Gh = strlen (a[JVpFlL87C]);
            if (kJdx7Gh < l)
                strcpy (temp, a[JVpFlL87C]);
        }
        printf ("%s\n", temp);
    }
}

