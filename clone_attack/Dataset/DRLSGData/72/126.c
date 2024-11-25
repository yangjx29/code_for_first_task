int main () {
    int nkp4W9w6FV, vQjoPXGM4w, A8UvM0m1CRfq [500] [500];
    cin >> nkp4W9w6FV >> vQjoPXGM4w;
    for (int EytGX2759 = (589 - 588);
    nkp4W9w6FV >= EytGX2759; EytGX2759++) {
        A8UvM0m1CRfq[EytGX2759][0] = -1000;
        A8UvM0m1CRfq[EytGX2759][vQjoPXGM4w + (194 - 193)] = -1000;
    }
    for (int JlJ8gWLfY2z = 1;
    JlJ8gWLfY2z <= vQjoPXGM4w; JlJ8gWLfY2z++) {
        A8UvM0m1CRfq[0][JlJ8gWLfY2z] = -1000;
        A8UvM0m1CRfq[nkp4W9w6FV + 1][JlJ8gWLfY2z] = -1000;
    }
    for (int EytGX2759 = 1;
    EytGX2759 <= nkp4W9w6FV; EytGX2759++)
        for (int JlJ8gWLfY2z = 1;
        JlJ8gWLfY2z <= vQjoPXGM4w; JlJ8gWLfY2z++)
            cin >> A8UvM0m1CRfq[EytGX2759][JlJ8gWLfY2z];
    for (int EytGX2759 = 1;
    EytGX2759 <= nkp4W9w6FV; EytGX2759++)
        for (int JlJ8gWLfY2z = 1;
        JlJ8gWLfY2z <= vQjoPXGM4w; JlJ8gWLfY2z++)
            if ((A8UvM0m1CRfq[EytGX2759][JlJ8gWLfY2z] >= A8UvM0m1CRfq[EytGX2759 -1][JlJ8gWLfY2z]) && (A8UvM0m1CRfq[EytGX2759][JlJ8gWLfY2z] >= A8UvM0m1CRfq[EytGX2759 +1][JlJ8gWLfY2z]) && (A8UvM0m1CRfq[EytGX2759][JlJ8gWLfY2z] >= A8UvM0m1CRfq[EytGX2759][JlJ8gWLfY2z -1]) && (A8UvM0m1CRfq[EytGX2759][JlJ8gWLfY2z] >= A8UvM0m1CRfq[EytGX2759][JlJ8gWLfY2z +1]))
                cout << EytGX2759 -1 << ' ' << JlJ8gWLfY2z -1 << endl;
    cin >> vQjoPXGM4w;
}

