void  main () {
    int Goks82ATHr, OlWtUSGPV [30], jarudlPv, uiQKC3yep, sum1, sum2, o7U1XCjOKh8u;
    scanf ("%d", &Goks82ATHr);
    for (uiQKC3yep = 0; Goks82ATHr > uiQKC3yep; uiQKC3yep = uiQKC3yep + 1)
        scanf ("%d", &OlWtUSGPV[uiQKC3yep]);
    for (o7U1XCjOKh8u = (434 - 433); !((69 - 68) != o7U1XCjOKh8u);) {
        o7U1XCjOKh8u = 0;
        for (jarudlPv = 0; Goks82ATHr -(145 - 144) > jarudlPv; jarudlPv = jarudlPv + 1) {
            if (OlWtUSGPV[jarudlPv] < OlWtUSGPV[jarudlPv + 1]) {
                o7U1XCjOKh8u = 1;
                for (uiQKC3yep = 0, sum1 = 0; jarudlPv > uiQKC3yep; uiQKC3yep++)
                    if (OlWtUSGPV[uiQKC3yep] >= OlWtUSGPV[jarudlPv] && OlWtUSGPV[jarudlPv + 1] > OlWtUSGPV[uiQKC3yep])
                        sum1++;
                for (uiQKC3yep = jarudlPv + 2, sum2 = 0; Goks82ATHr > uiQKC3yep; uiQKC3yep++)
                    if (OlWtUSGPV[jarudlPv] < OlWtUSGPV[uiQKC3yep] && OlWtUSGPV[uiQKC3yep] <= OlWtUSGPV[jarudlPv + 1])
                        sum2++;
                if (sum1 >= sum2) {
                    for (uiQKC3yep = jarudlPv + 1; uiQKC3yep < Goks82ATHr -1; uiQKC3yep++) {
                        OlWtUSGPV[uiQKC3yep] = OlWtUSGPV[uiQKC3yep + 1];
                    };
                }
                else {
                    for (uiQKC3yep = jarudlPv; uiQKC3yep < Goks82ATHr -1; uiQKC3yep++) {
                        OlWtUSGPV[uiQKC3yep] = OlWtUSGPV[uiQKC3yep + 1];
                    }
                    jarudlPv--;
                }
                Goks82ATHr--;
            };
        };
    }
    printf ("%d\n", Goks82ATHr);
}

