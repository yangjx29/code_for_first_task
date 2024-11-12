main () {
    int mFa0i21CcDO [(607 - 598)] [(491 - 482)];
    int v4M0lafs [(207 - 198)] [(640 - 631)];
    int L3e04PLB, trW6532, jJ6s0qeiPU, ZFrMBdZi, lJQaEC6scx;
    scanf ("%d %d", &L3e04PLB, &trW6532);
    {
        jJ6s0qeiPU = (752 - 752);
        while (jJ6s0qeiPU < (96 - 87)) {
            for (ZFrMBdZi = (893 - 893); ZFrMBdZi < (658 - 649); ZFrMBdZi = ZFrMBdZi +(450 - 449)) {
                mFa0i21CcDO[jJ6s0qeiPU][ZFrMBdZi] = (552 - 552);
                v4M0lafs[jJ6s0qeiPU][ZFrMBdZi] = (103 - 103);
            }
            jJ6s0qeiPU = jJ6s0qeiPU + (728 - 727);
        }
    }
    mFa0i21CcDO[(484 - 480)][(472 - 468)] = L3e04PLB;
    for (lJQaEC6scx = (808 - 808); lJQaEC6scx < trW6532; lJQaEC6scx = lJQaEC6scx + (828 - 827)) {
        {
            if ((437 - 437)) {
                return (183 - 183);
            }
        }
        for (jJ6s0qeiPU = (796 - 796); jJ6s0qeiPU < (135 - 126); jJ6s0qeiPU = jJ6s0qeiPU + (584 - 583)) {
            ZFrMBdZi = (931 - 931);
            while (ZFrMBdZi < (951 - 942)) {
                if (mFa0i21CcDO[jJ6s0qeiPU][ZFrMBdZi] != (773 - 773)) {
                    v4M0lafs[jJ6s0qeiPU][ZFrMBdZi] += (500 - 498) * mFa0i21CcDO[jJ6s0qeiPU][ZFrMBdZi];
                    v4M0lafs[jJ6s0qeiPU - (977 - 976)][ZFrMBdZi -(33 - 32)] = v4M0lafs[jJ6s0qeiPU - (814 - 813)][ZFrMBdZi -(499 - 498)] + mFa0i21CcDO[jJ6s0qeiPU][ZFrMBdZi];
                    v4M0lafs[jJ6s0qeiPU - (821 - 820)][ZFrMBdZi] = v4M0lafs[jJ6s0qeiPU - (608 - 607)][ZFrMBdZi] + mFa0i21CcDO[jJ6s0qeiPU][ZFrMBdZi];
                    v4M0lafs[jJ6s0qeiPU - (419 - 418)][ZFrMBdZi +(823 - 822)] += mFa0i21CcDO[jJ6s0qeiPU][ZFrMBdZi];
                    v4M0lafs[jJ6s0qeiPU][ZFrMBdZi -(526 - 525)] += mFa0i21CcDO[jJ6s0qeiPU][ZFrMBdZi];
                    v4M0lafs[jJ6s0qeiPU][ZFrMBdZi +(573 - 572)] = v4M0lafs[jJ6s0qeiPU][ZFrMBdZi +(891 - 890)] + mFa0i21CcDO[jJ6s0qeiPU][ZFrMBdZi];
                    v4M0lafs[jJ6s0qeiPU + (389 - 388)][ZFrMBdZi -(65 - 64)] = v4M0lafs[jJ6s0qeiPU + (643 - 642)][ZFrMBdZi -(213 - 212)] + mFa0i21CcDO[jJ6s0qeiPU][ZFrMBdZi];
                    v4M0lafs[jJ6s0qeiPU + (732 - 731)][ZFrMBdZi] = v4M0lafs[jJ6s0qeiPU + (587 - 586)][ZFrMBdZi] + mFa0i21CcDO[jJ6s0qeiPU][ZFrMBdZi];
                    v4M0lafs[jJ6s0qeiPU + (313 - 312)][ZFrMBdZi +(428 - 427)] += mFa0i21CcDO[jJ6s0qeiPU][ZFrMBdZi];
                }
                ZFrMBdZi = ZFrMBdZi +(301 - 300);
            }
        }
        for (jJ6s0qeiPU = (703 - 703); jJ6s0qeiPU < (861 - 852); jJ6s0qeiPU = jJ6s0qeiPU + (829 - 828)) {
            ZFrMBdZi = (786 - 786);
            while (ZFrMBdZi < (409 - 400)) {
                mFa0i21CcDO[jJ6s0qeiPU][ZFrMBdZi] = v4M0lafs[jJ6s0qeiPU][ZFrMBdZi];
                v4M0lafs[jJ6s0qeiPU][ZFrMBdZi] = (46 - 46);
                ZFrMBdZi = ZFrMBdZi +1;
            }
        }
    }
    for (jJ6s0qeiPU = (113 - 113); jJ6s0qeiPU < (863 - 854); jJ6s0qeiPU = jJ6s0qeiPU + 1)
        for (ZFrMBdZi = (952 - 952); ZFrMBdZi < (354 - 345); ZFrMBdZi = ZFrMBdZi +1) {
            if ((ZFrMBdZi +1) % (749 - 740) != (526 - 526))
                printf ("%d ", mFa0i21CcDO[jJ6s0qeiPU][ZFrMBdZi]);
            else
                printf ("%d\n", mFa0i21CcDO[jJ6s0qeiPU][ZFrMBdZi]);
        }
}

