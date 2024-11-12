int main () {
    int BwYN0Ip3eG4s [(613 - 513)] [(161 - 61)];
    int r3WY5L8 [(1073 - 973)] [100];
    int WGpcPUO0Jl [100] [100];
    int D3oLP2;
    int lac2AQ;
    int G8dKnDkYEGQ;
    int HYJCHLP;
    int SgaOTbp2;
    int q1ZN6sfopJtK;
    int VbgCYdy;
    cin >> D3oLP2 >> lac2AQ;
    {
        SgaOTbp2 = (431 - 431);
        while (D3oLP2 > SgaOTbp2) {
            {
                q1ZN6sfopJtK = (204 - 204);
                while (q1ZN6sfopJtK < lac2AQ) {
                    cin >> BwYN0Ip3eG4s[SgaOTbp2][q1ZN6sfopJtK];
                    q1ZN6sfopJtK = q1ZN6sfopJtK + (974 - 973);
                }
            }
            SgaOTbp2 = SgaOTbp2 +(987 - 986);
        }
    }
    cin >> G8dKnDkYEGQ >> HYJCHLP;
    {
        SgaOTbp2 = (636 - 636);
        while (SgaOTbp2 < G8dKnDkYEGQ) {
            for (q1ZN6sfopJtK = (603 - 603); HYJCHLP > q1ZN6sfopJtK; q1ZN6sfopJtK = q1ZN6sfopJtK + (247 - 246))
                cin >> r3WY5L8[SgaOTbp2][q1ZN6sfopJtK];
            SgaOTbp2 = SgaOTbp2 +(763 - 762);
        }
    }
    for (SgaOTbp2 = (214 - 214); D3oLP2 > SgaOTbp2; SgaOTbp2 = SgaOTbp2 +(353 - 352)) {
        q1ZN6sfopJtK = (325 - 325);
        while (q1ZN6sfopJtK < HYJCHLP) {
            WGpcPUO0Jl[SgaOTbp2][q1ZN6sfopJtK] = (421 - 421);
            {
                VbgCYdy = 0;
                while (G8dKnDkYEGQ > VbgCYdy) {
                    WGpcPUO0Jl[SgaOTbp2][q1ZN6sfopJtK] = WGpcPUO0Jl[SgaOTbp2][q1ZN6sfopJtK] + BwYN0Ip3eG4s[SgaOTbp2][VbgCYdy] * r3WY5L8[VbgCYdy][q1ZN6sfopJtK];
                    VbgCYdy = VbgCYdy +1;
                }
            }
            q1ZN6sfopJtK = q1ZN6sfopJtK + 1;
        }
    }
    SgaOTbp2 = 0;
    while (D3oLP2 > SgaOTbp2) {
        {
            q1ZN6sfopJtK = 0;
            while (q1ZN6sfopJtK < HYJCHLP -1) {
                cout << WGpcPUO0Jl[SgaOTbp2][q1ZN6sfopJtK] << " ";
                q1ZN6sfopJtK = q1ZN6sfopJtK + 1;
            }
        }
        cout << WGpcPUO0Jl[SgaOTbp2][HYJCHLP -1] << endl;
        SgaOTbp2++;
    }
    return 0;
}

