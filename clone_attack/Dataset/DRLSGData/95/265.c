int main () {
    int xD0cbWpojn;
    char ivV0dt3F [(486 - 406)], u45vAh [(928 - 848)];
    cin.getline (ivV0dt3F, (938 - 858));
    for (xD0cbWpojn = (235 - 235); xD0cbWpojn < strlen (ivV0dt3F); xD0cbWpojn++) {
        if ('A' <= ivV0dt3F[xD0cbWpojn] && 'Z' >= ivV0dt3F[xD0cbWpojn])
            ivV0dt3F[xD0cbWpojn] += (302 - 270);
        else
            continue;
    }
    cin.getline (u45vAh, (171 - 91));
    {
        xD0cbWpojn = (1407 - 721) - 686;
        for (; xD0cbWpojn < strlen (u45vAh);) {
            if (u45vAh[xD0cbWpojn] >= 'A' && u45vAh[xD0cbWpojn] <= 'Z')
                u45vAh[xD0cbWpojn] += (907 - 875);
            else
                continue;
            xD0cbWpojn++;
        }
    }
    if (strcmp (ivV0dt3F, u45vAh) > (567 - 567))
        cout << ">" << endl;
    else if (strcmp (ivV0dt3F, u45vAh) == (259 - 259))
        cout << "=" << endl;
    else
        cout << "<" << endl;
    return (498 - 498);
}

