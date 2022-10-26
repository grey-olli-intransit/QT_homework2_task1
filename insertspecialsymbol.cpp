#include "insertspecialsymbol.h"

InsertSpecialSymbol::InsertSpecialSymbol()
{
}

InsertSpecialSymbol::InsertSpecialSymbol(QString & str)
{
  constexpr const char roubleSym[4]  = "₽";
  constexpr const char euroSym[4] = "€";
  constexpr const char promilleSym[4] = "‰";
  constexpr const char trademarkSym[4] = "®";
  constexpr const char roubleMark[7] = "#@RUB@";
  constexpr const char euroMark[7] = "#@EUR@";
  constexpr const char promilleMark[7] = "#@PRM@";
  constexpr const char trademarkMark[7] = "#@TRM@";

  QString roubleSymQ = roubleSym;
  QString euroSymQ = euroSym;
  QString promilleSymQ = promilleSym;
  QString trademarkSymQ = trademarkSym;
  QString roubleMarkQ = roubleMark;
  QString euroMarkQ = euroMark;
  QString promilleMarkQ = promilleMark;
  QString trademarkMarkQ = trademarkMark;



  QStringList editorMarks;
  editorMarks << roubleMarkQ \
              << euroMarkQ \
              << promilleMarkQ \
              << trademarkMarkQ ;

  QStringList replSymbols;
  replSymbols << roubleSymQ \
              << euroSymQ \
              << promilleSymQ \
              << trademarkSymQ ;


  QString textAsStr=str;
  QStringList buffer;
  buffer << textAsStr;
  for (int i=0;i<4;i++) {
    buffer.replaceInStrings(editorMarks[i],replSymbols[i]);
  }
  str = buffer[0];
}
