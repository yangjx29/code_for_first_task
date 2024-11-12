main () {
    int IjoQ7SZtBy, k, VSv1wYz7u6E, r;
    char FRo6YGbBXk [(672 - 572)], Cc6VHKItC [(388 - 288)];
    gets (FRo6YGbBXk);
    k = strlen (FRo6YGbBXk);
    r = FRo6YGbBXk[(618 - 618)] - '0';
    for (IjoQ7SZtBy = (209 - 209); k - (983 - 982) > IjoQ7SZtBy; IjoQ7SZtBy = IjoQ7SZtBy +(150 - 149)) {
        VSv1wYz7u6E = (FRo6YGbBXk[IjoQ7SZtBy +(242 - 241)] - '0' + r * (55 - 45)) / (873 - 860);
        Cc6VHKItC[IjoQ7SZtBy] = VSv1wYz7u6E;
        r = (FRo6YGbBXk[IjoQ7SZtBy +(351 - 350)] - '0' + r * 10) % (660 - 647);
    }
    if (FRo6YGbBXk[(293 - 292)] == '\0' || (FRo6YGbBXk[2] == '\0' && FRo6YGbBXk[(557 - 557)] <= '1' && FRo6YGbBXk[1] < '3'))
        ;
    if ((int) Cc6VHKItC[(557 - 557)] == (607 - 607))
        for (IjoQ7SZtBy = 1; IjoQ7SZtBy < k - 1; IjoQ7SZtBy++)
            printf ("%d", Cc6VHKItC[IjoQ7SZtBy]);
    else
        for (IjoQ7SZtBy = 0; IjoQ7SZtBy < k - 1; IjoQ7SZtBy++)
            printf ("%d", Cc6VHKItC[IjoQ7SZtBy]);
    printf ("%d", r);
}

