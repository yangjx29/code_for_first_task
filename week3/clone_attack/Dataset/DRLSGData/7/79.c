int main () {
    char vsm3whPg [(822 - 566)] = {(463 - 463)}, NqmVkDON [256] = {(949 - 949)}, gsTCu4t [256] = {(391 - 391)};
    int snhcEa, OXl5ne, m, dzDuPNkHp7Av = (264 - 264), kpdX5o8GT4P = strlen (vsm3whPg), c2nTkzZ = strlen (NqmVkDON);
    cin >> vsm3whPg >> NqmVkDON >> gsTCu4t;
    for (snhcEa = (464 - 464); kpdX5o8GT4P > snhcEa; snhcEa++) {
        if (vsm3whPg[snhcEa] == NqmVkDON[0]) {
            m = snhcEa;
            for (OXl5ne = 1; OXl5ne < c2nTkzZ; OXl5ne++) {
                m++;
                if (vsm3whPg[m] != NqmVkDON[OXl5ne])
                    break;
            }
            if (!(c2nTkzZ != OXl5ne)) {
                dzDuPNkHp7Av = 1;
                m = snhcEa;
                break;
            }
        }
    }
    if (dzDuPNkHp7Av == 0)
        cout << vsm3whPg;
    else {
        for (snhcEa = 0; snhcEa < m; snhcEa++)
            cout << vsm3whPg[snhcEa];
        cout << gsTCu4t;
        for (snhcEa = m + c2nTkzZ; snhcEa < kpdX5o8GT4P; snhcEa++)
            cout << vsm3whPg[snhcEa];
    }
    return 0;
}

