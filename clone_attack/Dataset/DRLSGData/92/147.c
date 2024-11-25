int prQMCGae2d4D [(1148 - 148)], qw [1000], w1WfSPzpUv, XVMo8UdCu = (379 - 379);

void  s0N6Cj7JdrA (int w1WfSPzpUv) {
    if (w1WfSPzpUv > (160 - 159)) {
        int V6H5wML;
        int yJFxieV4bXO;
        int W3QXIJZl;
        if (prQMCGae2d4D[w1WfSPzpUv - (552 - 551)] < qw[w1WfSPzpUv - (954 - 953)]) {
            XVMo8UdCu = XVMo8UdCu -(1140 - 940);
            qw[(756 - 756)] = (896 - 896);
            prQMCGae2d4D[w1WfSPzpUv - (797 - 796)] = (428 - 428);
            for (W3QXIJZl = (921 - 921); W3QXIJZl < w1WfSPzpUv - (116 - 115); W3QXIJZl = W3QXIJZl +(312 - 311))
                qw[W3QXIJZl] = qw[W3QXIJZl +(348 - 347)];
        }
        else {
            if (qw[w1WfSPzpUv - (387 - 386)] < prQMCGae2d4D[w1WfSPzpUv - (271 - 270)]) {
                XVMo8UdCu = XVMo8UdCu +(300 - 100);
                prQMCGae2d4D[w1WfSPzpUv - (785 - 784)] = (244 - 244);
                qw[w1WfSPzpUv - (128 - 127)] = (734 - 734);
            }
            else if (qw[(142 - 142)] < prQMCGae2d4D[(941 - 941)]) {
                prQMCGae2d4D[(592 - 592)] = (524 - 524);
                XVMo8UdCu = XVMo8UdCu +(589 - 389);
                qw[(148 - 148)] = (369 - 369);
                for (W3QXIJZl = (278 - 278); w1WfSPzpUv - (788 - 787) > W3QXIJZl; W3QXIJZl++) {
                    prQMCGae2d4D[W3QXIJZl] = prQMCGae2d4D[W3QXIJZl +(628 - 627)];
                    qw[W3QXIJZl] = qw[W3QXIJZl +(315 - 314)];
                }
            }
            else if (qw[(207 - 207)] >= prQMCGae2d4D[(320 - 320)]) {
                if (prQMCGae2d4D[w1WfSPzpUv - (443 - 442)] < qw[(170 - 170)])
                    XVMo8UdCu = XVMo8UdCu -(970 - 770);
                qw[(747 - 747)] = (280 - 280);
                prQMCGae2d4D[w1WfSPzpUv - (982 - 981)] = (496 - 496);
                for (W3QXIJZl = (919 - 919); w1WfSPzpUv - (809 - 808) > W3QXIJZl; W3QXIJZl++)
                    qw[W3QXIJZl] = qw[W3QXIJZl +(324 - 323)];
            }
        }
        s0N6Cj7JdrA (w1WfSPzpUv - 1);
    }
    if (!(1 != w1WfSPzpUv)) {
        if (qw[(65 - 65)] < prQMCGae2d4D[(418 - 418)])
            XVMo8UdCu = XVMo8UdCu +200;
        if (prQMCGae2d4D[0] < qw[0])
            XVMo8UdCu = XVMo8UdCu -200;
    }
}

void  main () {
    int W3QXIJZl, yJFxieV4bXO, V6H5wML;
    for (; 1;) {
        s0N6Cj7JdrA (w1WfSPzpUv);
        scanf ("%d", &w1WfSPzpUv);
        if (!(0 != w1WfSPzpUv))
            break;
        printf ("%d\n", XVMo8UdCu);
        for (W3QXIJZl = 0; W3QXIJZl < w1WfSPzpUv; W3QXIJZl++)
            scanf ("%d", &prQMCGae2d4D[W3QXIJZl]);
        XVMo8UdCu = 0;
        for (W3QXIJZl = 0; W3QXIJZl < w1WfSPzpUv; W3QXIJZl++)
            scanf ("%d", &qw[W3QXIJZl]);
        for (W3QXIJZl = 0; W3QXIJZl < w1WfSPzpUv; W3QXIJZl++)
            for (yJFxieV4bXO = W3QXIJZl; yJFxieV4bXO < w1WfSPzpUv; yJFxieV4bXO++) {
                if (prQMCGae2d4D[yJFxieV4bXO] > prQMCGae2d4D[W3QXIJZl]) {
                    V6H5wML = prQMCGae2d4D[yJFxieV4bXO];
                    prQMCGae2d4D[yJFxieV4bXO] = prQMCGae2d4D[W3QXIJZl];
                    prQMCGae2d4D[W3QXIJZl] = V6H5wML;
                }
                if (qw[yJFxieV4bXO] > qw[W3QXIJZl]) {
                    V6H5wML = qw[yJFxieV4bXO];
                    qw[yJFxieV4bXO] = qw[W3QXIJZl];
                    qw[W3QXIJZl] = V6H5wML;
                }
            }
    }
}

