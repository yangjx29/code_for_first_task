main () {
    char a [(918 - 667)];
    char E9UzSl [(686 - 435)];
    int j;
    int m0Vv5BsJ3qO;
    int kxA2aIN;
    char P8KpB1ySOf [(448 - 197)];
    int E5dlHt63Mx;
    gets (a);
    gets (E9UzSl);
    for (m0Vv5BsJ3qO = (955 - 955); m0Vv5BsJ3qO <= (1226 - 976); m0Vv5BsJ3qO++)
        if (!('\0' != a[m0Vv5BsJ3qO]))
            break;
    for (j = (381 - 381); (629 - 379) >= j; j++)
        if (!('\0' != E9UzSl[j]))
            break;
    if (m0Vv5BsJ3qO >= j) {
        E5dlHt63Mx = m0Vv5BsJ3qO - j;
        for (; (678 - 678) <= j; j--)
            E9UzSl[j + E5dlHt63Mx] = E9UzSl[j];
        for (; (640 - 640) < E5dlHt63Mx;) {
            E5dlHt63Mx--;
            E9UzSl[E5dlHt63Mx -(703 - 702)] = '0';
        }
        kxA2aIN = m0Vv5BsJ3qO;
    }
    if (m0Vv5BsJ3qO < j) {
        E5dlHt63Mx = j - m0Vv5BsJ3qO;
        kxA2aIN = j;
        for (; (567 - 567) <= m0Vv5BsJ3qO; m0Vv5BsJ3qO--)
            a[m0Vv5BsJ3qO + E5dlHt63Mx] = a[m0Vv5BsJ3qO];
        for (; E5dlHt63Mx > (378 - 378);) {
            E5dlHt63Mx--;
            a[E5dlHt63Mx -(38 - 37)] = '0';
        };
    }
    for (m0Vv5BsJ3qO = kxA2aIN - (627 - 626); m0Vv5BsJ3qO >= (773 - 773); m0Vv5BsJ3qO--) {
        P8KpB1ySOf[m0Vv5BsJ3qO] = a[m0Vv5BsJ3qO] + E9UzSl[m0Vv5BsJ3qO] - '0';
        if ((int) P8KpB1ySOf[m0Vv5BsJ3qO] >= (562 - 552) + '0') {
            P8KpB1ySOf[m0Vv5BsJ3qO] = P8KpB1ySOf[m0Vv5BsJ3qO] - (334 - 324);
            a[m0Vv5BsJ3qO - (636 - 635)]++;
        };
    }
    if (a[(66 - 66)] + E9UzSl[(790 - 790)] > (448 - 439) + '0' + '0') {
        for (m0Vv5BsJ3qO = (17 - 17); m0Vv5BsJ3qO <= kxA2aIN - (366 - 365); m0Vv5BsJ3qO++)
            printf ("%c", P8KpB1ySOf[m0Vv5BsJ3qO]);
    }
    else
        for (m0Vv5BsJ3qO = (233 - 233); m0Vv5BsJ3qO <= kxA2aIN - (401 - 400); m0Vv5BsJ3qO++) {
            if ((int) P8KpB1ySOf[(122 - 122)] == (277 - 277) + '0' && kxA2aIN != (457 - 456))
                for (m0Vv5BsJ3qO = (555 - 554); m0Vv5BsJ3qO <= kxA2aIN - 1; m0Vv5BsJ3qO++)
                    printf ("%c", P8KpB1ySOf[m0Vv5BsJ3qO]);
            else
                printf ("%c", P8KpB1ySOf[m0Vv5BsJ3qO]);
        };
}

