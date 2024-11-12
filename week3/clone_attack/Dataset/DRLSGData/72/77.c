int main () {
    int gZo8UjOaz;
    int bBO8VoESij;
    int Emh7rq;
    int o5Omn364Mc [30] [30];
    gZo8UjOaz = 0;
    cin >> Emh7rq >> bBO8VoESij;
    for (int rnfrCl = 1;
    Emh7rq >= rnfrCl; rnfrCl++) {
        for (int swzLKnGZvUjl = 1;
        bBO8VoESij >= swzLKnGZvUjl; swzLKnGZvUjl = swzLKnGZvUjl + 1)
            cin >> o5Omn364Mc[rnfrCl][swzLKnGZvUjl];
    }
    {
        int swzLKnGZvUjl;
        swzLKnGZvUjl = 1;
        for (; swzLKnGZvUjl <= bBO8VoESij;) {
            o5Omn364Mc[0][swzLKnGZvUjl] = o5Omn364Mc[1][swzLKnGZvUjl];
            swzLKnGZvUjl = swzLKnGZvUjl + 1;
        }
    }
    {
        int rnfrCl;
        rnfrCl = 1;
        while (rnfrCl <= Emh7rq) {
            o5Omn364Mc[rnfrCl][0] = o5Omn364Mc[rnfrCl][1];
            o5Omn364Mc[rnfrCl][bBO8VoESij + 1] = o5Omn364Mc[rnfrCl][bBO8VoESij];
            rnfrCl = rnfrCl + 1;
        }
    }
    {
        int swzLKnGZvUjl;
        swzLKnGZvUjl = 1;
        while (swzLKnGZvUjl <= bBO8VoESij) {
            o5Omn364Mc[Emh7rq +1][swzLKnGZvUjl] = o5Omn364Mc[Emh7rq][swzLKnGZvUjl];
            swzLKnGZvUjl = swzLKnGZvUjl + 1;
        }
    }
    {
        int rnfrCl;
        rnfrCl = 1;
        for (; rnfrCl <= Emh7rq;) {
            {
                int swzLKnGZvUjl;
                swzLKnGZvUjl = 1;
                while (swzLKnGZvUjl <= bBO8VoESij) {
                    int E3Cj0bEmsNL;
                    E3Cj0bEmsNL = 0;
                    {
                        E3Cj0bEmsNL += (o5Omn364Mc[rnfrCl - 1][swzLKnGZvUjl] <= o5Omn364Mc[rnfrCl][swzLKnGZvUjl]);
                        E3Cj0bEmsNL += (o5Omn364Mc[rnfrCl + 1][swzLKnGZvUjl] <= o5Omn364Mc[rnfrCl][swzLKnGZvUjl]);
                        E3Cj0bEmsNL += (o5Omn364Mc[rnfrCl][swzLKnGZvUjl - 1] <= o5Omn364Mc[rnfrCl][swzLKnGZvUjl]);
                        E3Cj0bEmsNL += (o5Omn364Mc[rnfrCl][swzLKnGZvUjl + 1] <= o5Omn364Mc[rnfrCl][swzLKnGZvUjl]);
                    }
                    if (E3Cj0bEmsNL == 4)
                        cout << rnfrCl - 1 << " " << swzLKnGZvUjl - 1 << endl;
                    swzLKnGZvUjl++;
                }
            }
            rnfrCl++;
        }
    }
    return 0;
}

