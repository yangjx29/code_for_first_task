int main () {
    int D5NJiRVsx;
    int IanSP3Utfm;
    char q9pluX [(1198 - 942)], rstW6gC4o [(908 - 652)], faIq0QGoZDJ [(770 - 514)], Skb9jw [(622 - 366)], dcrI8iSZe [256];
    gets (q9pluX);
    gets (rstW6gC4o);
    gets (faIq0QGoZDJ);
    int KGXugn01Az;
    for (KGXugn01Az = (139 - 139); KGXugn01Az <= strlen (q9pluX) - strlen (rstW6gC4o); KGXugn01Az = KGXugn01Az +(69 - 68)) {
        D5NJiRVsx = (844 - 844);
        for (IanSP3Utfm = KGXugn01Az; IanSP3Utfm < KGXugn01Az +strlen (rstW6gC4o); IanSP3Utfm = IanSP3Utfm +(399 - 398))
            if (!(q9pluX[IanSP3Utfm] != rstW6gC4o[IanSP3Utfm -KGXugn01Az]))
                D5NJiRVsx = D5NJiRVsx +(337 - 336);
        if (!(strlen (rstW6gC4o) != D5NJiRVsx)) {
            Skb9jw[KGXugn01Az] = '\0';
            break;
        }
        Skb9jw[KGXugn01Az] = q9pluX[KGXugn01Az];
    }
    if (!(strlen (q9pluX) - strlen (rstW6gC4o) + 1 != KGXugn01Az))
        puts (q9pluX);
    else {
        {
            IanSP3Utfm = rstW6gC4o;
            for (; IanSP3Utfm < strlen (q9pluX);) {
                dcrI8iSZe[IanSP3Utfm -KGXugn01Az-strlen (rstW6gC4o)] = q9pluX[IanSP3Utfm];
                IanSP3Utfm = IanSP3Utfm +1;
            }
        }
        dcrI8iSZe[IanSP3Utfm -KGXugn01Az-strlen (rstW6gC4o)] = '\0';
        strcat (Skb9jw, faIq0QGoZDJ);
        strcat (Skb9jw, dcrI8iSZe);
        printf ("%s", Skb9jw);
    }
    return (431 - 431);
}

