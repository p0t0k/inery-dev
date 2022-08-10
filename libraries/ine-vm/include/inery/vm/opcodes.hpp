#pragma once
#include <inery/vm/opcodes_def.hpp>
#include <inery/vm/variant.hpp>

#include <map>

namespace inery { namespace vm {
   enum opcodes {
      INE_VM_CONTROL_FLOW_OPS(INE_VM_CREATE_ENUM)
      INE_VM_BR_TABLE_OP(INE_VM_CREATE_ENUM)
      INE_VM_RETURN_OP(INE_VM_CREATE_ENUM)
      INE_VM_CALL_OPS(INE_VM_CREATE_ENUM)
      INE_VM_CALL_IMM_OPS(INE_VM_CREATE_ENUM)
      INE_VM_PAMEMETRIC_OPS(INE_VM_CREATE_ENUM)
      INE_VM_VARIABLE_ACCESS_OPS(INE_VM_CREATE_ENUM)
      INE_VM_MEMORY_OPS(INE_VM_CREATE_ENUM)
      INE_VM_I32_CONSTANT_OPS(INE_VM_CREATE_ENUM)
      INE_VM_I64_CONSTANT_OPS(INE_VM_CREATE_ENUM)
      INE_VM_F32_CONSTANT_OPS(INE_VM_CREATE_ENUM)
      INE_VM_F64_CONSTANT_OPS(INE_VM_CREATE_ENUM)
      INE_VM_COMPARISON_OPS(INE_VM_CREATE_ENUM)
      INE_VM_NUMERIC_OPS(INE_VM_CREATE_ENUM)
      INE_VM_CONVERSION_OPS(INE_VM_CREATE_ENUM)
      INE_VM_EXIT_OP(INE_VM_CREATE_ENUM)
      INE_VM_EMPTY_OPS(INE_VM_CREATE_ENUM)
      INE_VM_ERROR_OPS(INE_VM_CREATE_ENUM)
   };
   
   struct opcode_utils {
      std::map<uint16_t, std::string> opcode_map{
         INE_VM_CONTROL_FLOW_OPS(INE_VM_CREATE_MAP)
         INE_VM_BR_TABLE_OP(INE_VM_CREATE_MAP)
         INE_VM_RETURN_OP(INE_VM_CREATE_MAP)
         INE_VM_CALL_OPS(INE_VM_CREATE_MAP)
         INE_VM_CALL_IMM_OPS(INE_VM_CREATE_MAP)
         INE_VM_PAMEMETRIC_OPS(INE_VM_CREATE_MAP)
         INE_VM_VARIABLE_ACCESS_OPS(INE_VM_CREATE_MAP)
         INE_VM_MEMORY_OPS(INE_VM_CREATE_MAP)
         INE_VM_I32_CONSTANT_OPS(INE_VM_CREATE_MAP)
         INE_VM_I64_CONSTANT_OPS(INE_VM_CREATE_MAP)
         INE_VM_F32_CONSTANT_OPS(INE_VM_CREATE_MAP)
         INE_VM_F64_CONSTANT_OPS(INE_VM_CREATE_MAP)
         INE_VM_COMPARISON_OPS(INE_VM_CREATE_MAP)
         INE_VM_NUMERIC_OPS(INE_VM_CREATE_MAP)
         INE_VM_CONVERSION_OPS(INE_VM_CREATE_MAP)
         INE_VM_EXIT_OP(INE_VM_CREATE_MAP)
         INE_VM_EMPTY_OPS(INE_VM_CREATE_MAP)
         INE_VM_ERROR_OPS(INE_VM_CREATE_MAP)
      };
   }; 

   enum imm_types {
      none,
      block_imm,
      varuint32_imm,
      br_table_imm,
   };


   INE_VM_CONTROL_FLOW_OPS(INE_VM_CREATE_CONTROL_FLOW_TYPES)
   INE_VM_BR_TABLE_OP(INE_VM_CREATE_BR_TABLE_TYPE)
   INE_VM_RETURN_OP(INE_VM_CREATE_CONTROL_FLOW_TYPES)
   INE_VM_CALL_OPS(INE_VM_CREATE_CALL_TYPES)
   INE_VM_CALL_IMM_OPS(INE_VM_CREATE_CALL_IMM_TYPES)
   INE_VM_PAMEMETRIC_OPS(INE_VM_CREATE_TYPES)
   INE_VM_VARIABLE_ACCESS_OPS(INE_VM_CREATE_VARIABLE_ACCESS_TYPES)
   INE_VM_MEMORY_OPS(INE_VM_CREATE_MEMORY_TYPES)
   INE_VM_I32_CONSTANT_OPS(INE_VM_CREATE_I32_CONSTANT_TYPE)
   INE_VM_I64_CONSTANT_OPS(INE_VM_CREATE_I64_CONSTANT_TYPE)
   INE_VM_F32_CONSTANT_OPS(INE_VM_CREATE_F32_CONSTANT_TYPE)
   INE_VM_F64_CONSTANT_OPS(INE_VM_CREATE_F64_CONSTANT_TYPE)
   INE_VM_COMPARISON_OPS(INE_VM_CREATE_TYPES)
   INE_VM_NUMERIC_OPS(INE_VM_CREATE_TYPES)
   INE_VM_CONVERSION_OPS(INE_VM_CREATE_TYPES)
   INE_VM_EXIT_OP(INE_VM_CREATE_EXIT_TYPE)
   INE_VM_EMPTY_OPS(INE_VM_CREATE_TYPES)
   INE_VM_ERROR_OPS(INE_VM_CREATE_TYPES)

   using opcode = variant<
      INE_VM_CONTROL_FLOW_OPS(INE_VM_IDENTITY)
      INE_VM_BR_TABLE_OP(INE_VM_IDENTITY)
      INE_VM_RETURN_OP(INE_VM_IDENTITY)
      INE_VM_CALL_OPS(INE_VM_IDENTITY)
      INE_VM_CALL_IMM_OPS(INE_VM_IDENTITY)
      INE_VM_PAMEMETRIC_OPS(INE_VM_IDENTITY)
      INE_VM_VARIABLE_ACCESS_OPS(INE_VM_IDENTITY)
      INE_VM_MEMORY_OPS(INE_VM_IDENTITY)
      INE_VM_I32_CONSTANT_OPS(INE_VM_IDENTITY)
      INE_VM_I64_CONSTANT_OPS(INE_VM_IDENTITY)
      INE_VM_F32_CONSTANT_OPS(INE_VM_IDENTITY)
      INE_VM_F64_CONSTANT_OPS(INE_VM_IDENTITY)
      INE_VM_COMPARISON_OPS(INE_VM_IDENTITY)
      INE_VM_NUMERIC_OPS(INE_VM_IDENTITY)
      INE_VM_CONVERSION_OPS(INE_VM_IDENTITY)
      INE_VM_EXIT_OP(INE_VM_IDENTITY)
      INE_VM_EMPTY_OPS(INE_VM_IDENTITY)
      INE_VM_ERROR_OPS(INE_VM_IDENTITY_END)
      >;
}} // namespace inery::vm
