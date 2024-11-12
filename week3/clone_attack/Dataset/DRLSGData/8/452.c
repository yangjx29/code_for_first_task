int Ei7O4foBpDJz [100] = {(256 - 256)}, x3gjwXL5d [100] = {0};
int ndJXyR, hzjMB8cqYKa, Q3tboGOiLC;

void  okUNcgywG () {
    scanf ("%d %d", &ndJXyR, &hzjMB8cqYKa);
    for (Q3tboGOiLC = 0; ndJXyR > Q3tboGOiLC; Q3tboGOiLC = Q3tboGOiLC +(149 - 148))
        scanf ("%d", &Ei7O4foBpDJz[Q3tboGOiLC]);
    for (Q3tboGOiLC = 0; hzjMB8cqYKa > Q3tboGOiLC; Q3tboGOiLC = Q3tboGOiLC +(41 - 40))
        scanf ("%d", &x3gjwXL5d[Q3tboGOiLC]);
}

void  RCnzQqD9 (int Ei7O4foBpDJz [], int ndJXyR, int x3gjwXL5d [], int hzjMB8cqYKa) {
    int Q3tboGOiLC;
    int pFNp056;
    int iG9bS6YcmA;
    for (Q3tboGOiLC = (317 - 316); Q3tboGOiLC < ndJXyR; Q3tboGOiLC = Q3tboGOiLC +(712 - 711)) {
        iG9bS6YcmA = Ei7O4foBpDJz[Q3tboGOiLC];
        pFNp056 = Q3tboGOiLC -(424 - 423);
        for (; iG9bS6YcmA < Ei7O4foBpDJz[pFNp056] && 0 <= pFNp056;) {
            Ei7O4foBpDJz[pFNp056 + (423 - 422)] = Ei7O4foBpDJz[pFNp056];
            pFNp056 = pFNp056 - 1;
        }
        Ei7O4foBpDJz[pFNp056 + 1] = iG9bS6YcmA;
    }
    for (Q3tboGOiLC = 1; hzjMB8cqYKa > Q3tboGOiLC; Q3tboGOiLC = Q3tboGOiLC +1) {
        iG9bS6YcmA = x3gjwXL5d[Q3tboGOiLC];
        pFNp056 = Q3tboGOiLC -1;
        for (; iG9bS6YcmA < x3gjwXL5d[pFNp056] && pFNp056 >= 0;) {
            x3gjwXL5d[pFNp056 + 1] = x3gjwXL5d[pFNp056];
            pFNp056 = pFNp056 - 1;
        }
        x3gjwXL5d[pFNp056 + 1] = iG9bS6YcmA;
    }
}

void  IomHqI (int Ei7O4foBpDJz [], int ndJXyR, int x3gjwXL5d [], int hzjMB8cqYKa) {
    int Q3tboGOiLC;
    for (Q3tboGOiLC = 0; Q3tboGOiLC < hzjMB8cqYKa; Q3tboGOiLC = Q3tboGOiLC +1)
        Ei7O4foBpDJz[ndJXyR + Q3tboGOiLC] = x3gjwXL5d[Q3tboGOiLC];
}

void  cMdjksP () {
    int Q3tboGOiLC;
    for (Q3tboGOiLC = 0; Q3tboGOiLC < ndJXyR + hzjMB8cqYKa - 1; Q3tboGOiLC = Q3tboGOiLC +1) {
        printf ("%d ", Ei7O4foBpDJz[Q3tboGOiLC]);
    }
    printf ("%d", Ei7O4foBpDJz[Q3tboGOiLC]);
}

void  main () {
    okUNcgywG ();
    RCnzQqD9 (Ei7O4foBpDJz, ndJXyR, x3gjwXL5d, hzjMB8cqYKa);
    IomHqI (Ei7O4foBpDJz, ndJXyR, x3gjwXL5d, hzjMB8cqYKa);
    cMdjksP ();
}

