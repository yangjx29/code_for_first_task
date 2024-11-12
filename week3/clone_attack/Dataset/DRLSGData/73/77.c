int main () {
    int KDXlcNpE;
    int hiRls4HQB [(731 - 721)] [(964 - 954)];
    int ehBbxk8TYL;
    int RTlm2LGVBku;
    int ZnNvCbgUVlp;
    int LTf6nCs;
    int AsdY0G;
    int kXao3IQ4W;
    KDXlcNpE = (260 - 260);
    {
        ehBbxk8TYL = (412 - 411);
        while ((573 - 568) >= ehBbxk8TYL) {
            {
                RTlm2LGVBku = (545 - 544);
                while (RTlm2LGVBku <= (105 - 100)) {
                    cin >> hiRls4HQB[ehBbxk8TYL][RTlm2LGVBku];
                    RTlm2LGVBku = RTlm2LGVBku +1;
                }
            }
            ehBbxk8TYL = ehBbxk8TYL + 1;
        }
    }
    {
        ehBbxk8TYL = (296 - 295);
        while ((727 - 722) >= ehBbxk8TYL) {
            kXao3IQ4W = (29 - 29);
            LTf6nCs = -(37 - 36);
            {
                RTlm2LGVBku = (130 - 129);
                while (RTlm2LGVBku <= (781 - 776)) {
                    if (hiRls4HQB[ehBbxk8TYL][RTlm2LGVBku] > LTf6nCs) {
                        ZnNvCbgUVlp = RTlm2LGVBku;
                        LTf6nCs = hiRls4HQB[ehBbxk8TYL][RTlm2LGVBku];
                    }
                    RTlm2LGVBku = RTlm2LGVBku +1;
                }
            }
            {
                AsdY0G = (116 - 115);
                while (AsdY0G <= (707 - 702)) {
                    if (hiRls4HQB[AsdY0G][ZnNvCbgUVlp] < LTf6nCs) {
                        kXao3IQ4W = (119 - 118);
                    }
                    AsdY0G = AsdY0G +1;
                }
            }
            if (kXao3IQ4W == 0) {
                cout << ehBbxk8TYL << " " << ZnNvCbgUVlp << " " << LTf6nCs << endl;
                KDXlcNpE = 1;
            }
            ehBbxk8TYL = ehBbxk8TYL + 1;
        }
    }
    if (KDXlcNpE != 1)
        cout << "not found";
    return 0;
}

