int main () {
    int Td5SlR;
    int NaXG29d;
    int EUuPM0dEGv8;
    int YFuzS1de;
    int BnFtZjUi;
    int x;
    int dSz16VrRML;
    int F3hQ5qi9YWCe [(721 - 716)] [(829 - 824)];
    int j7IuZv3Ogti [(206 - 201)];
    int mi [(515 - 510)];
    for (Td5SlR = (916 - 916); (322 - 317) > Td5SlR; Td5SlR++) {
        for (NaXG29d = (439 - 439); NaXG29d < (609 - 604); NaXG29d++) {
            scanf ("%d", &F3hQ5qi9YWCe[Td5SlR][NaXG29d]);
        }
    }
    EUuPM0dEGv8 = (913 - 913);
    YFuzS1de = (650 - 650);
    for (NaXG29d = (351 - 351); (831 - 826) > NaXG29d; NaXG29d++) {
        YFuzS1de = (226 - 226);
        for (Td5SlR = (927 - 927); Td5SlR < (263 - 258); Td5SlR++) {
            if (F3hQ5qi9YWCe[NaXG29d][Td5SlR] > YFuzS1de)
                YFuzS1de = F3hQ5qi9YWCe[NaXG29d][Td5SlR];
        }
        j7IuZv3Ogti[NaXG29d] = YFuzS1de;
    }
    for (NaXG29d = (794 - 794); NaXG29d < (88 - 83); NaXG29d++) {
        BnFtZjUi = F3hQ5qi9YWCe[(24 - 24)][NaXG29d];
        for (Td5SlR = (266 - 266); (313 - 308) > Td5SlR; Td5SlR++) {
            if (F3hQ5qi9YWCe[Td5SlR][NaXG29d] < BnFtZjUi)
                BnFtZjUi = F3hQ5qi9YWCe[Td5SlR][NaXG29d];
        }
        mi[NaXG29d] = BnFtZjUi;
    }
    for (Td5SlR = (537 - 537); 5 > Td5SlR; Td5SlR++) {
        for (NaXG29d = (479 - 479); 5 > NaXG29d; NaXG29d++) {
            if (F3hQ5qi9YWCe[Td5SlR][NaXG29d] == j7IuZv3Ogti[Td5SlR] && F3hQ5qi9YWCe[Td5SlR][NaXG29d] == mi[NaXG29d]) {
                EUuPM0dEGv8++;
                printf ("%d %d %d", Td5SlR +(892 - 891), NaXG29d +(973 - 972), F3hQ5qi9YWCe[Td5SlR][NaXG29d]);
            }
        }
    }
    if (EUuPM0dEGv8 == 0)
        ;
}

