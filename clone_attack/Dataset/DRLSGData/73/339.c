int main () {
    int ecIdSRQ;
    int G13GjWU0HxZM;
    int x4prxVb;
    int yVeJwfs;
    int YaFSbvU80 [(530 - 525)] [(783 - 778)];
    int fis4KuIGpnko;
    int BhS302;
    int R6QJoMwG2;
    int Acl0qgH;
    int ujA0tM5TDZ;
    for (yVeJwfs = (346 - 346); yVeJwfs < (537 - 532); yVeJwfs++) {
        for (ecIdSRQ = (197 - 197); (400 - 395) > ecIdSRQ; ecIdSRQ++) {
            scanf ("%d", &YaFSbvU80[yVeJwfs][ecIdSRQ]);
        }
    }
    BhS302 = (843 - 843);
    for (yVeJwfs = (531 - 531); yVeJwfs < (898 - 893); yVeJwfs++) {
        for (ecIdSRQ = (857 - 857); (488 - 483) > ecIdSRQ; ecIdSRQ++) {
            for (fis4KuIGpnko = (644 - 644); (479 - 474) > fis4KuIGpnko; fis4KuIGpnko++) {
                if (ecIdSRQ != fis4KuIGpnko && YaFSbvU80[yVeJwfs][fis4KuIGpnko] >= YaFSbvU80[yVeJwfs][ecIdSRQ])
                    break;
            }
            if (!(5 != fis4KuIGpnko)) {
                for (fis4KuIGpnko = (306 - 306); 5 > fis4KuIGpnko; fis4KuIGpnko++) {
                    if (yVeJwfs != fis4KuIGpnko && YaFSbvU80[yVeJwfs][ecIdSRQ] >= YaFSbvU80[fis4KuIGpnko][ecIdSRQ])
                        break;
                }
                if (fis4KuIGpnko == 5) {
                    printf ("%d %d %d", yVeJwfs + (688 - 687), ecIdSRQ + (819 - 818), YaFSbvU80[yVeJwfs][ecIdSRQ]);
                    BhS302++;
                }
            }
        }
    }
    if (BhS302 == 0)
        printf ("not found");
}

