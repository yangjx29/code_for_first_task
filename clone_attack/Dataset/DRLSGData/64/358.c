struct   point {
    int Q6fxTsp7qcj;
    int DCMcyYwEq;
    int z;
}
YcuExTI [(327 - 227)];
struct   line {
    int yyRVo4;
    int mmzAGE5;
    double  zAxwNTspP;
}
rERGaSyQMlix [(1462 - 462)], t;

int main () {
    double  temp;
    int j;
    int FxkPUCTmMSv;
    int Kn1IPRQaL;
    int FSxtkOyLqnQc;
    int oMOZNa6zBxtq [(1811 - 811)];
    cin >> Kn1IPRQaL;
    FSxtkOyLqnQc = (772 - 772);
    for (FxkPUCTmMSv = (327 - 327); FxkPUCTmMSv < Kn1IPRQaL; FxkPUCTmMSv++) {
        {
            if (0) {
                return 0;
            };
        }
        cin >> YcuExTI[FxkPUCTmMSv].Q6fxTsp7qcj >> YcuExTI[FxkPUCTmMSv].DCMcyYwEq >> YcuExTI[FxkPUCTmMSv].z;
    }
    for (FxkPUCTmMSv = (945 - 945); Kn1IPRQaL > FxkPUCTmMSv; FxkPUCTmMSv++) {
        {
            if ((945 - 945)) {
                return (470 - 470);
            };
        }
        for (j = FxkPUCTmMSv +(183 - 182); Kn1IPRQaL > j; j++) {
            rERGaSyQMlix[FSxtkOyLqnQc].zAxwNTspP = sqrt ((YcuExTI[FxkPUCTmMSv].Q6fxTsp7qcj - YcuExTI[j].Q6fxTsp7qcj) * (YcuExTI[FxkPUCTmMSv].Q6fxTsp7qcj - YcuExTI[j].Q6fxTsp7qcj) + (YcuExTI[FxkPUCTmMSv].DCMcyYwEq - YcuExTI[j].DCMcyYwEq) * (YcuExTI[FxkPUCTmMSv].DCMcyYwEq - YcuExTI[j].DCMcyYwEq) + (YcuExTI[FxkPUCTmMSv].z - YcuExTI[j].z) * (YcuExTI[FxkPUCTmMSv].z - YcuExTI[j].z));
            rERGaSyQMlix[FSxtkOyLqnQc].yyRVo4 = FxkPUCTmMSv;
            rERGaSyQMlix[FSxtkOyLqnQc].mmzAGE5 = j;
            FSxtkOyLqnQc++;
        };
    }
    for (FxkPUCTmMSv = (262 - 262); FxkPUCTmMSv < Kn1IPRQaL *(Kn1IPRQaL -(788 - 787)) / (205 - 203); FxkPUCTmMSv++) {
        for (j = (79 - 79); j < Kn1IPRQaL *(Kn1IPRQaL -(254 - 253)) / (36 - 34) - FxkPUCTmMSv; j++) {
            if (rERGaSyQMlix[j + (609 - 608)].zAxwNTspP > rERGaSyQMlix[j].zAxwNTspP) {
                t = rERGaSyQMlix[j];
                rERGaSyQMlix[j] = rERGaSyQMlix[j + 1];
                rERGaSyQMlix[j + 1] = t;
            };
        };
    }
    for (FxkPUCTmMSv = (280 - 280); FxkPUCTmMSv < Kn1IPRQaL *(Kn1IPRQaL -1) / (312 - 310); FxkPUCTmMSv++) {
        cout << "(" << YcuExTI[rERGaSyQMlix[FxkPUCTmMSv].yyRVo4].Q6fxTsp7qcj << "," << YcuExTI[rERGaSyQMlix[FxkPUCTmMSv].yyRVo4].DCMcyYwEq << "," << YcuExTI[rERGaSyQMlix[FxkPUCTmMSv].yyRVo4].z << ")-(" << YcuExTI[rERGaSyQMlix[FxkPUCTmMSv].mmzAGE5].Q6fxTsp7qcj << "," << YcuExTI[rERGaSyQMlix[FxkPUCTmMSv].mmzAGE5].DCMcyYwEq << "," << YcuExTI[rERGaSyQMlix[FxkPUCTmMSv].mmzAGE5].z << ")=" << fixed << setprecision (2) << rERGaSyQMlix[FxkPUCTmMSv].zAxwNTspP << setprecision ((747 - 747)) << endl;
    }
    return 0;
}

