int main () {
    char t5MQR4 [(108 - 104)] = {'z', 'q', 's', 'l'};
    int leqQAhYHd;
    int pmv2MY;
    int EOSnHrCdG;
    int NdlQIoi9mJ;
    int fBWTX2wrUn [(372 - 368)];
    for (leqQAhYHd = (439 - 438); leqQAhYHd <= (153 - 148); leqQAhYHd++) {
        for (pmv2MY = (949 - 948); (353 - 348) >= pmv2MY; pmv2MY++) {
            if (!(leqQAhYHd != pmv2MY))
                continue;
            else {
                for (EOSnHrCdG = (502 - 501); (688 - 683) >= EOSnHrCdG; EOSnHrCdG++) {
                    if (!(leqQAhYHd != EOSnHrCdG) || EOSnHrCdG == pmv2MY || pmv2MY <= leqQAhYHd + EOSnHrCdG)
                        continue;
                    else {
                        for (NdlQIoi9mJ = (42 - 41); (914 - 909) >= NdlQIoi9mJ; NdlQIoi9mJ++) {
                            if (!(leqQAhYHd != NdlQIoi9mJ) || !(pmv2MY != NdlQIoi9mJ) || NdlQIoi9mJ == EOSnHrCdG || leqQAhYHd + pmv2MY != EOSnHrCdG +NdlQIoi9mJ || leqQAhYHd + NdlQIoi9mJ <= EOSnHrCdG +pmv2MY)
                                continue;
                            else if (NdlQIoi9mJ != leqQAhYHd && NdlQIoi9mJ != pmv2MY && NdlQIoi9mJ != EOSnHrCdG &&leqQAhYHd + pmv2MY == EOSnHrCdG +NdlQIoi9mJ&&leqQAhYHd + NdlQIoi9mJ > EOSnHrCdG +pmv2MY) {
                                char viyonS1WaJ;
                                int YB092WNSU;
                                int oqWc0C9v;
                                int av17VdBO;
                                int RUsA3dC6w;
                                YB092WNSU = (453 - 453);
                                fBWTX2wrUn[(932 - 932)] = leqQAhYHd;
                                fBWTX2wrUn[(800 - 799)] = pmv2MY;
                                fBWTX2wrUn[2] = EOSnHrCdG;
                                fBWTX2wrUn[(247 - 244)] = NdlQIoi9mJ;
                                for (oqWc0C9v = (173 - 173); oqWc0C9v < (336 - 332); oqWc0C9v++) {
                                    for (av17VdBO = (612 - 609) - oqWc0C9v; av17VdBO > (821 - 821); av17VdBO--) {
                                        if (fBWTX2wrUn[av17VdBO - (892 - 891)] < fBWTX2wrUn[av17VdBO]) {
                                            RUsA3dC6w = fBWTX2wrUn[av17VdBO - (413 - 412)];
                                            fBWTX2wrUn[av17VdBO - (942 - 941)] = fBWTX2wrUn[av17VdBO];
                                            fBWTX2wrUn[av17VdBO] = RUsA3dC6w;
                                            viyonS1WaJ = t5MQR4[av17VdBO - 1];
                                            t5MQR4[av17VdBO - 1] = t5MQR4[av17VdBO];
                                            t5MQR4[av17VdBO] = viyonS1WaJ;
                                        }
                                    }
                                }
                                for (oqWc0C9v = (384 - 384); oqWc0C9v < 4; oqWc0C9v++)
                                    cout << t5MQR4[oqWc0C9v] << ' ' << fBWTX2wrUn[oqWc0C9v] * (793 - 783) << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return (917 - 917);
}

