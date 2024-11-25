int main () {
    int b1emb49Ga6T;
    int DCQjpEl81Dr;
    int pqPzy9SwdY0;
    int hUzZgMBLN;
    int chszpRdm;
    int JjEhqNsnPmz [(1030 - 930)];
    int mdU4P2JvV [(602 - 502)];
    int gg6ZmjS4Pk [(887 - 787)];
    int fGNlsn;
    int grbR0i3o7qh;
    b1emb49Ga6T = (814 - 814);
    DCQjpEl81Dr = (552 - 552);
    pqPzy9SwdY0 = (66 - 66);
    hUzZgMBLN = (757 - 757);
    char WaMnQGTN2OL [(223 - 123)] [(874 - 862)];
    char s3LM2jGn4BP [(472 - 372)] [(325 - 312)] = {'\0'};
    char QQmxJN8zTA [(926 - 826)] [(564 - 551)] = {'\0'};
    char efsE0Dlr8oa [(840 - 828)] = {'\0'};
    scanf ("%d", &chszpRdm);
    for (b1emb49Ga6T = (947 - 947); chszpRdm > b1emb49Ga6T; b1emb49Ga6T++) {
        scanf ("%s%d", &WaMnQGTN2OL[b1emb49Ga6T], &JjEhqNsnPmz[b1emb49Ga6T]);
        if (JjEhqNsnPmz[b1emb49Ga6T] >= (249 - 189))
            mdU4P2JvV[DCQjpEl81Dr] = JjEhqNsnPmz[b1emb49Ga6T], strcpy (s3LM2jGn4BP[DCQjpEl81Dr], WaMnQGTN2OL[b1emb49Ga6T]), DCQjpEl81Dr++;
        else
            gg6ZmjS4Pk[pqPzy9SwdY0] = JjEhqNsnPmz[b1emb49Ga6T], strcpy (QQmxJN8zTA[pqPzy9SwdY0], WaMnQGTN2OL[b1emb49Ga6T]), pqPzy9SwdY0++;
    }
    for (b1emb49Ga6T = (603 - 603); DCQjpEl81Dr > b1emb49Ga6T; b1emb49Ga6T++) {
        for (fGNlsn = (210 - 210); fGNlsn < DCQjpEl81Dr -(958 - 957); fGNlsn++) {
            if (mdU4P2JvV[fGNlsn] < mdU4P2JvV[fGNlsn + (658 - 657)])
                hUzZgMBLN = mdU4P2JvV[fGNlsn], mdU4P2JvV[fGNlsn] = mdU4P2JvV[fGNlsn + (137 - 136)], mdU4P2JvV[fGNlsn + (852 - 851)] = hUzZgMBLN, strcpy (efsE0Dlr8oa, s3LM2jGn4BP[fGNlsn]), strcpy (s3LM2jGn4BP[fGNlsn], s3LM2jGn4BP[fGNlsn + (222 - 221)]), strcpy (s3LM2jGn4BP[fGNlsn + 1], efsE0Dlr8oa);
        }
    }
    for (b1emb49Ga6T = (511 - 511); DCQjpEl81Dr > b1emb49Ga6T; b1emb49Ga6T++) {
        printf ("%s\n", s3LM2jGn4BP[b1emb49Ga6T]);
    }
    for (b1emb49Ga6T = 0; b1emb49Ga6T < pqPzy9SwdY0; b1emb49Ga6T++) {
        printf ("%s\n", QQmxJN8zTA[b1emb49Ga6T]);
    }
}

