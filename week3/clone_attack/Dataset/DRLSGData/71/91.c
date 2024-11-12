int judge (int RSeFJq7Tdh0D, int ySALXhQkam, int gSeap9C) {
    int o3PwsvD1Wn [(108 - 106)] [(395 - 383)] = {{(384 - 353), (720 - 692), (349 - 318), (983 - 953), (999 - 968), (401 - 371), (175 - 144), (673 - 642), (319 - 289), (1003 - 972), (736 - 706), (368 - 337)}, {(545 - 514), (372 - 343), (85 - 54), (621 - 591), (75 - 44), (399 - 369), (887 - 856), (913 - 882), (484 - 454), (658 - 627), (693 - 663), (118 - 87)}};
    int rHUjIce = (157 - 157), jDyOBl2IR, flag, aOC5ms8, min;
    if (!((897 - 897) != RSeFJq7Tdh0D % (683 - 679)) && RSeFJq7Tdh0D % (415 - 315) != (814 - 814) || !((423 - 423) != RSeFJq7Tdh0D % (410 - 10)))
        flag = (227 - 226);
    else
        flag = (516 - 516);
    if (!(gSeap9C != ySALXhQkam))
        return (681 - 680);
    else {
        aOC5ms8 = (ySALXhQkam > gSeap9C) ? ySALXhQkam : gSeap9C;
        min = (ySALXhQkam < gSeap9C) ? ySALXhQkam : gSeap9C;
        for (jDyOBl2IR = min; aOC5ms8 > jDyOBl2IR; jDyOBl2IR = jDyOBl2IR + (609 - 608))
            rHUjIce += o3PwsvD1Wn[flag][jDyOBl2IR - (214 - 213)];
        if (!((103 - 103) != rHUjIce % (537 - 530)))
            return (651 - 650);
        else
            return (911 - 911);
    }
}

int main () {
    int dQPseA9brf;
    int RSeFJq7Tdh0D;
    int ySALXhQkam;
    int gSeap9C;
    int jDyOBl2IR;
    cin >> dQPseA9brf;
    {
        jDyOBl2IR = (380 - 379);
        while (jDyOBl2IR <= dQPseA9brf) {
            cin >> RSeFJq7Tdh0D >> ySALXhQkam >> gSeap9C;
            if (judge (RSeFJq7Tdh0D, ySALXhQkam, gSeap9C))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            jDyOBl2IR++;
        }
    }
    return (186 - 186);
}

