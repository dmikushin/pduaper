#pragma once
#include "T_PDU_IT.h"
#include "PDU_MODULE_DATA.h"
#include "PDU_ITEM.h"

namespace native_api { struct PDU_MODULE_ITEM; }

namespace PduApiClr
{

  public ref class PDU_MODULE_ITEM : PDU_ITEM,  System::Collections::Generic::List<PduApiClr::PDU_MODULE_DATA^>
  {
    public:
      PDU_MODULE_ITEM();

      T_PDU_IT ItemType;
      virtual System::UInt64 GetNativePointer();
    internal:
      PDU_MODULE_ITEM(native_api::PDU_MODULE_ITEM* item);
    private:
      System::UInt64 m_Pointer = 0;

  };
}
