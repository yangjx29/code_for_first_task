int main () {
    int zc6mCLtabIrE, K7LXPGs, kDIonek, ujPTRtrgIJG = (710 - 710), ydevQsZhq2I = (491 - 491), w6wABQJ8Z, Bu5OPqpV9xi;
    cin >> zc6mCLtabIrE;
    w6wABQJ8Z = zc6mCLtabIrE;
    {
        Bu5OPqpV9xi = 0;
        while (Bu5OPqpV9xi < w6wABQJ8Z) {
            int qmFUKR7CP6Xp [w6wABQJ8Z] [w6wABQJ8Z];
            ujPTRtrgIJG = 0;
            {
                K7LXPGs = 0;
                for (; w6wABQJ8Z > K7LXPGs;) {
                    {
                        kDIonek = 0;
                        for (; w6wABQJ8Z > kDIonek;) {
                            cin >> qmFUKR7CP6Xp[K7LXPGs][kDIonek];
                            kDIonek++;
                        }
                    }
                    K7LXPGs++;
                }
            }
            zc6mCLtabIrE = w6wABQJ8Z;
            for (; (437 - 436) < zc6mCLtabIrE;) {
                for (K7LXPGs = 0; K7LXPGs < zc6mCLtabIrE; K7LXPGs++) {
                    ydevQsZhq2I = qmFUKR7CP6Xp[K7LXPGs][0];
                    {
                        kDIonek = 0;
                        for (; zc6mCLtabIrE > kDIonek;) {
                            if (ydevQsZhq2I > qmFUKR7CP6Xp[K7LXPGs][kDIonek]) {
                                ydevQsZhq2I = qmFUKR7CP6Xp[K7LXPGs][kDIonek];
                            }
                            kDIonek++;
                        }
                    }
                    {
                        kDIonek = 0;
                        for (; kDIonek < zc6mCLtabIrE;) {
                            qmFUKR7CP6Xp[K7LXPGs][kDIonek] = qmFUKR7CP6Xp[K7LXPGs][kDIonek] - ydevQsZhq2I;
                            kDIonek++;
                        }
                    }
                }
                {
                    kDIonek = 0;
                    while (kDIonek < zc6mCLtabIrE) {
                        ydevQsZhq2I = qmFUKR7CP6Xp[0][kDIonek];
                        {
                            K7LXPGs = 0;
                            while (K7LXPGs < zc6mCLtabIrE) {
                                if (qmFUKR7CP6Xp[K7LXPGs][kDIonek] < ydevQsZhq2I) {
                                    ydevQsZhq2I = qmFUKR7CP6Xp[K7LXPGs][kDIonek];
                                }
                                K7LXPGs++;
                            }
                        }
                        {
                            K7LXPGs = 0;
                            for (; zc6mCLtabIrE > K7LXPGs;) {
                                qmFUKR7CP6Xp[K7LXPGs][kDIonek] = qmFUKR7CP6Xp[K7LXPGs][kDIonek] - ydevQsZhq2I;
                                K7LXPGs++;
                            }
                        }
                        kDIonek++;
                    }
                }
                ujPTRtrgIJG = ujPTRtrgIJG + qmFUKR7CP6Xp[(577 - 576)][1];
                {
                    K7LXPGs = 1;
                    while (zc6mCLtabIrE - 1 > K7LXPGs) {
                        kDIonek = 0;
                        for (; kDIonek < zc6mCLtabIrE;) {
                            qmFUKR7CP6Xp[K7LXPGs][kDIonek] = qmFUKR7CP6Xp[K7LXPGs +1][kDIonek];
                            kDIonek++;
                        }
                        K7LXPGs++;
                    }
                }
                for (kDIonek = 1; kDIonek < zc6mCLtabIrE - 1; kDIonek++) {
                    K7LXPGs = 0;
                    while (K7LXPGs < zc6mCLtabIrE) {
                        qmFUKR7CP6Xp[K7LXPGs][kDIonek] = qmFUKR7CP6Xp[K7LXPGs][kDIonek + 1];
                        K7LXPGs++;
                    }
                }
                zc6mCLtabIrE = zc6mCLtabIrE - 1;
            }
            cout << ujPTRtrgIJG << endl;
            Bu5OPqpV9xi++;
        }
    }
    return 0;
}

