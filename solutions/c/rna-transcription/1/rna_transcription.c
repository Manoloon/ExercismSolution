#include "rna_transcription.h"
#include <stdlib.h>
char *to_rna(const char *dna) 
{
    if(dna == NULL) return "";

    switch (*dna)
    {
    case 'G': return "C";
    case 'C': return "G";
    case 'T': return "A";
    case 'A': return "U";
    default: return 0;
    }
}
