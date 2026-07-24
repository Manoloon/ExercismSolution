/*
*    minimum c++ version : c++ 17
*/
#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H
#include <string_view>
namespace rna_transcription
{
    char to_rna(const char &RnaStrand);
    [[maybe_unused]] std::string to_rna(std::string_view RNAStrand);
}

#endif // RNA_TRANSCRIPTION_H