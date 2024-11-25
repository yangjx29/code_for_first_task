int main () {
    int w3WYdUoDf5Zi;
    int aHJAaZReBgzq [(182 - 174)] [(706 - 698)];
    int TY4gFHZQz;
    int q7xNcA;
    int ojpuAb;
    int KdSkjnPfaZGv;
    int aIXD78F;
    int ehyWpob;
    int Fe4QVlTK;
    int sgk0Hv;
    w3WYdUoDf5Zi = (763 - 763);
    cin >> Fe4QVlTK;
    cin.get ();
    cin >> sgk0Hv;
    for (TY4gFHZQz = (120 - 120); TY4gFHZQz < Fe4QVlTK; TY4gFHZQz++)
        for (q7xNcA = (834 - 834); q7xNcA < sgk0Hv; q7xNcA++)
            cin >> aHJAaZReBgzq[TY4gFHZQz][q7xNcA];
    for (TY4gFHZQz = (973 - 973); TY4gFHZQz < Fe4QVlTK; TY4gFHZQz++) {
        KdSkjnPfaZGv = aHJAaZReBgzq[TY4gFHZQz][(443 - 443)], aIXD78F = 0;
        {
            q7xNcA = (107 - 106);
            for (; q7xNcA < sgk0Hv;) {
                if (aHJAaZReBgzq[TY4gFHZQz][q7xNcA] > KdSkjnPfaZGv) {
                    KdSkjnPfaZGv = aHJAaZReBgzq[TY4gFHZQz][q7xNcA];
                    aIXD78F = q7xNcA;
                }
                q7xNcA++;
            }
        }
        ehyWpob = aHJAaZReBgzq[0][aIXD78F];
        {
            ojpuAb = 0;
            for (; ojpuAb < Fe4QVlTK;) {
                if (aHJAaZReBgzq[ojpuAb][aIXD78F] < ehyWpob) {
                    ehyWpob = aHJAaZReBgzq[ojpuAb][aIXD78F];
                }
                ojpuAb++;
            }
        }
        if (ehyWpob == aHJAaZReBgzq[TY4gFHZQz][aIXD78F])
            cout << TY4gFHZQz << "+" << aIXD78F << endl;
        else
            w3WYdUoDf5Zi++;
    }
    if (w3WYdUoDf5Zi == Fe4QVlTK)
        cout << "No" << endl;
    return 0;
}

