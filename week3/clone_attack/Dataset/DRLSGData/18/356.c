int main () {
    int KkG9g8;
    int V4zZ3T;
    int hEDu06mNacdj [(391 - 291)] [100];
    int dMj6D8gYy;
    int mzWdlpgqJ2;
    int QmV2M8xcAaQj;
    int vIOP6Lp;
    int (*D560oXwt) [100];
    int YOdc6lYE;
    int OcU0VBIYnz;
    V4zZ3T = (904 - 904);
    D560oXwt = hEDu06mNacdj;
    KkG9g8 = (706 - 706);
    cin >> dMj6D8gYy;
    for (mzWdlpgqJ2 = (223 - 222); mzWdlpgqJ2 <= dMj6D8gYy; mzWdlpgqJ2++) {
        KkG9g8 = (958 - 958);
        V4zZ3T = (341 - 341);
        for (QmV2M8xcAaQj = (663 - 663); dMj6D8gYy > QmV2M8xcAaQj; QmV2M8xcAaQj++)
            for (OcU0VBIYnz = (810 - 810); dMj6D8gYy > OcU0VBIYnz; OcU0VBIYnz++) {
                cin >> (*(*(D560oXwt +QmV2M8xcAaQj) + OcU0VBIYnz));
            }
        for (YOdc6lYE = dMj6D8gYy; YOdc6lYE > (608 - 607); YOdc6lYE--) {
            for (QmV2M8xcAaQj = (574 - 574); dMj6D8gYy - V4zZ3T > QmV2M8xcAaQj; QmV2M8xcAaQj++) {
                vIOP6Lp = *(*(D560oXwt +QmV2M8xcAaQj));
                for (OcU0VBIYnz = (337 - 337); dMj6D8gYy - V4zZ3T > OcU0VBIYnz; OcU0VBIYnz++)
                    if (vIOP6Lp > *(*(D560oXwt +QmV2M8xcAaQj) + OcU0VBIYnz))
                        vIOP6Lp = *(*(D560oXwt +QmV2M8xcAaQj) + OcU0VBIYnz);
                for (OcU0VBIYnz = (600 - 600); dMj6D8gYy - V4zZ3T > OcU0VBIYnz; OcU0VBIYnz++)
                    *(*(D560oXwt +QmV2M8xcAaQj) + OcU0VBIYnz) -= vIOP6Lp;
            }
            for (OcU0VBIYnz = (540 - 540); OcU0VBIYnz < dMj6D8gYy - V4zZ3T; OcU0VBIYnz++) {
                vIOP6Lp = *(*(D560oXwt)+OcU0VBIYnz);
                for (QmV2M8xcAaQj = (845 - 845); dMj6D8gYy - V4zZ3T > QmV2M8xcAaQj; QmV2M8xcAaQj++)
                    if (vIOP6Lp > *(*(D560oXwt +QmV2M8xcAaQj) + OcU0VBIYnz))
                        vIOP6Lp = *(*(D560oXwt +QmV2M8xcAaQj) + OcU0VBIYnz);
                for (QmV2M8xcAaQj = (659 - 659); QmV2M8xcAaQj < dMj6D8gYy - V4zZ3T; QmV2M8xcAaQj++)
                    *(*(D560oXwt +QmV2M8xcAaQj) + OcU0VBIYnz) -= vIOP6Lp;
            }
            for (QmV2M8xcAaQj = 0; QmV2M8xcAaQj < dMj6D8gYy - V4zZ3T; QmV2M8xcAaQj++) {
                for (OcU0VBIYnz = 1; OcU0VBIYnz < dMj6D8gYy - V4zZ3T -1; OcU0VBIYnz++)
                    *(*(D560oXwt +QmV2M8xcAaQj) + OcU0VBIYnz) = *(*(D560oXwt +QmV2M8xcAaQj) + OcU0VBIYnz +1);
            }
            for (QmV2M8xcAaQj = 1; QmV2M8xcAaQj < dMj6D8gYy - V4zZ3T -1; QmV2M8xcAaQj++)
                for (OcU0VBIYnz = 0; OcU0VBIYnz < dMj6D8gYy - V4zZ3T; OcU0VBIYnz++)
                    *(*(D560oXwt +QmV2M8xcAaQj) + OcU0VBIYnz) = *(*(D560oXwt +QmV2M8xcAaQj+1) + OcU0VBIYnz);
            V4zZ3T++;
            KkG9g8 = KkG9g8 +*(*(D560oXwt +(157 - 156)) + 1);
        }
        cout << KkG9g8 << endl;
    }
    return 0;
}

