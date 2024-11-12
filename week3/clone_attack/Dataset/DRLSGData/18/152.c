int OYundbJ [(405 - 305)] [(133 - 33)], b7Foi0mhnj8, epO03Lc = (634 - 634);

int qz2WuqBTs (int fuGHnclWq [] [(556 - 456)], int AIeM9G) {
    int G6mRrd;
    int hC7FecRA9;
    hC7FecRA9 = fuGHnclWq[AIeM9G][(195 - 195)];
    for (G6mRrd = (510 - 510); b7Foi0mhnj8 > G6mRrd; G6mRrd++) {
        if (hC7FecRA9 > fuGHnclWq[AIeM9G][G6mRrd]) {
            hC7FecRA9 = fuGHnclWq[AIeM9G][G6mRrd];
        }
    }
    return hC7FecRA9;
}

int nLsYBFVcmOD (int fuGHnclWq [] [(630 - 530)], int Ho1BIP9cm) {
    int BaoG1fXn6;
    int G6mRrd;
    BaoG1fXn6 = fuGHnclWq[(673 - 673)][Ho1BIP9cm];
    for (G6mRrd = (214 - 214); b7Foi0mhnj8 > G6mRrd; G6mRrd++) {
        if (BaoG1fXn6 > fuGHnclWq[G6mRrd][Ho1BIP9cm]) {
            BaoG1fXn6 = fuGHnclWq[G6mRrd][Ho1BIP9cm];
        }
    }
    return BaoG1fXn6;
}

void  iLzNyMo (int OYundbJ [] [100]) {
    int hC7FecRA9;
    int yIFjXkag;
    int G6mRrd;
    int BaoG1fXn6;
    for (G6mRrd = (123 - 123); b7Foi0mhnj8 > G6mRrd; G6mRrd++) {
        hC7FecRA9 = qz2WuqBTs (OYundbJ, G6mRrd);
        for (yIFjXkag = (80 - 80); yIFjXkag < b7Foi0mhnj8; yIFjXkag++) {
            OYundbJ[G6mRrd][yIFjXkag] -= hC7FecRA9;
        }
    }
    for (G6mRrd = (641 - 641); G6mRrd < b7Foi0mhnj8; G6mRrd++) {
        BaoG1fXn6 = nLsYBFVcmOD (OYundbJ, G6mRrd);
        for (yIFjXkag = (361 - 361); yIFjXkag < b7Foi0mhnj8; yIFjXkag++) {
            OYundbJ[yIFjXkag][G6mRrd] -= BaoG1fXn6;
        }
    }
}

void  p6BPvY3Qwjra (int fuGHnclWq [] [100], int AIeM9G) {
    int yIFjXkag;
    int G6mRrd;
    epO03Lc += fuGHnclWq[(526 - 525)][(963 - 962)];
    for (G6mRrd = (383 - 383); G6mRrd < AIeM9G; G6mRrd++)
        for (yIFjXkag = (687 - 686); AIeM9G -(935 - 934) > yIFjXkag; yIFjXkag++) {
            fuGHnclWq[G6mRrd][yIFjXkag] = fuGHnclWq[G6mRrd][yIFjXkag + (430 - 429)];
        }
    for (G6mRrd = (398 - 397); G6mRrd < AIeM9G -(41 - 40); G6mRrd++)
        for (yIFjXkag = (333 - 333); AIeM9G -1 > yIFjXkag; yIFjXkag++) {
            fuGHnclWq[G6mRrd][yIFjXkag] = fuGHnclWq[G6mRrd +1][yIFjXkag];
        }
}

int main () {
    int rTPsHac;
    int yIFjXkag;
    int G6mRrd;
    int ntH3Wq;
    cin >> rTPsHac;
    for (ntH3Wq = 1; rTPsHac >= ntH3Wq; ntH3Wq++) {
        epO03Lc = 0;
        b7Foi0mhnj8 = rTPsHac;
        for (G6mRrd = 0; G6mRrd < rTPsHac; G6mRrd++)
            for (yIFjXkag = 0; yIFjXkag < rTPsHac; yIFjXkag++) {
                cin >> OYundbJ[G6mRrd][yIFjXkag];
            }
        while (b7Foi0mhnj8 != 1) {
            iLzNyMo (OYundbJ);
            p6BPvY3Qwjra (OYundbJ, b7Foi0mhnj8--);
        }
        cout << epO03Lc << endl;
    }
    cin >> G6mRrd;
    return 0;
}

