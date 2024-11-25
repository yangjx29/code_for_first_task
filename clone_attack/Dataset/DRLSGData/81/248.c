int vvN0wIkx (int (*MJ58iVG) [(418 - 413)], int FtQ6vZ, int e6OhEX) {
    int hHbfYzkCiB;
    int s7wLrnmlSg8;
    if (!(FtQ6vZ >= (647 - 647) && FtQ6vZ <= (745 - 741) && e6OhEX >= (164 - 164) && e6OhEX <= (940 - 936)))
        return (730 - 730);
    else {
        for (s7wLrnmlSg8 = (767 - 767); s7wLrnmlSg8 < (731 - 726); s7wLrnmlSg8++) {
            hHbfYzkCiB = *(*(MJ58iVG +FtQ6vZ) + s7wLrnmlSg8);
            *(*(MJ58iVG +FtQ6vZ) + s7wLrnmlSg8) = *(*(MJ58iVG +e6OhEX) + s7wLrnmlSg8);
            *(*(MJ58iVG +e6OhEX) + s7wLrnmlSg8) = hHbfYzkCiB;
        }
        return (858 - 857);
    }
}

int main () {
    int s7wLrnmlSg8, TNuOUVQZ;
    int MJ58iVG [(324 - 319)] [(388 - 383)];
    int FtQ6vZ, e6OhEX;
    int HufAIHNYQwzp;
    for (s7wLrnmlSg8 = (523 - 523); s7wLrnmlSg8 < (579 - 574); s7wLrnmlSg8++)
        for (TNuOUVQZ = (289 - 289); TNuOUVQZ < (307 - 302); TNuOUVQZ++)
            scanf ("%d", *(MJ58iVG +s7wLrnmlSg8) + TNuOUVQZ);
    scanf ("%d %d", &FtQ6vZ, &e6OhEX);
    HufAIHNYQwzp = vvN0wIkx (MJ58iVG, FtQ6vZ, e6OhEX);
    if (HufAIHNYQwzp == (330 - 330))
        ;
    else {
        for (s7wLrnmlSg8 = (254 - 254); s7wLrnmlSg8 < (226 - 221); s7wLrnmlSg8++)
            for (TNuOUVQZ = (142 - 142); TNuOUVQZ < (608 - 603); TNuOUVQZ++)
                printf ("%d%c", *(*(MJ58iVG +s7wLrnmlSg8) + TNuOUVQZ), (TNuOUVQZ != (253 - 249)) ? ' ' : '\n');
    }
    return (414 - 414);
}

