#pragma once
#include <cstdint>
#include "lib/rtti.h"
#define IRNODE_ALL_SUBCLASSES_AND_DIRECT_AND_INDIRECT_BASES(M, T, D, B, ...) \
  M(Type, D(Node), ##__VA_ARGS__) \
    M(Type_Base, D(Type) B(Node), ##__VA_ARGS__) \
      M(Type_Unknown, D(Type_Base) B(Type) B(Node), ##__VA_ARGS__) \
  M(StatOrDecl, D(Node), ##__VA_ARGS__) \
    M(Declaration, D(StatOrDecl) B(Node), ##__VA_ARGS__) \
    M(Type_Declaration, D(Type) B(Node), ##__VA_ARGS__) \
  M(Expression, D(Node), ##__VA_ARGS__) \
    M(Operation, D(Expression) B(Node), ##__VA_ARGS__) \
  M(Path, D(Node), ##__VA_ARGS__) \
      M(NamedExpression, D(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
  M(AnnotationToken, D(Node), ##__VA_ARGS__) \
  M(Annotation, D(Node), ##__VA_ARGS__) \
  M(Argument, D(Node), ##__VA_ARGS__) \
    M(Type_Any, D(Type) B(Node), ##__VA_ARGS__) \
    M(Type_Fragment, D(Type) B(Node), ##__VA_ARGS__) \
    M(Type_Type, D(Type) B(Node), ##__VA_ARGS__) \
      M(Type_Boolean, D(Type_Base) B(Type) B(Node), ##__VA_ARGS__) \
      M(Type_State, D(Type_Base) B(Type) B(Node), ##__VA_ARGS__) \
      M(Type_Bits, D(Type_Base) B(Type) B(Node), ##__VA_ARGS__) \
      M(Type_Varbits, D(Type_Base) B(Type) B(Node), ##__VA_ARGS__) \
      M(Parameter, D(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
  M(ParameterList, D(Node), ##__VA_ARGS__) \
      M(Type_Var, D(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
    M(Type_InfInt, D(Type) B(Node), ##__VA_ARGS__) \
      M(Type_Dontcare, D(Type_Base) B(Type) B(Node), ##__VA_ARGS__) \
      M(Type_Void, D(Type_Base) B(Type) B(Node), ##__VA_ARGS__) \
      M(Type_MatchKind, D(Type_Base) B(Type) B(Node), ##__VA_ARGS__) \
  M(TypeParameters, D(Node), ##__VA_ARGS__) \
      M(StructField, D(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(Type_StructLike, D(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
        M(Type_Struct, D(Type_StructLike) B(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
        M(Type_UnknownStruct, D(Type_StructLike) B(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
        M(Type_HeaderUnion, D(Type_StructLike) B(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
        M(Type_Header, D(Type_StructLike) B(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
    M(Type_Set, D(Type) B(Node), ##__VA_ARGS__) \
    M(Type_BaseList, D(Type) B(Node), ##__VA_ARGS__) \
      M(Type_List, D(Type_BaseList) B(Type) B(Node), ##__VA_ARGS__) \
      M(Type_Tuple, D(Type_BaseList) B(Type) B(Node), ##__VA_ARGS__) \
    M(Type_P4List, D(Type) B(Node), ##__VA_ARGS__) \
      M(Type_ArchBlock, D(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
        M(Type_Package, D(Type_ArchBlock) B(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
        M(Type_Parser, D(Type_ArchBlock) B(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
        M(Type_Control, D(Type_ArchBlock) B(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
    M(Type_Name, D(Type) B(Node), ##__VA_ARGS__) \
    M(Type_Array, D(Type) B(Node), ##__VA_ARGS__) \
    M(Type_Specialized, D(Type) B(Node), ##__VA_ARGS__) \
    M(Type_SpecializedCanonical, D(Type) B(Node), ##__VA_ARGS__) \
      M(Declaration_ID, D(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(Type_String, D(Type_Base) B(Type) B(Node), ##__VA_ARGS__) \
      M(Type_Enum, D(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
      M(SerEnumMember, D(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(Type_SerEnum, D(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
    M(Type_Table, D(Type) B(Node), ##__VA_ARGS__) \
    M(Type_ActionEnum, D(Type) B(Node), ##__VA_ARGS__) \
    M(Type_MethodBase, D(Type) B(Node), ##__VA_ARGS__) \
      M(Type_Method, D(Type_MethodBase) B(Type) B(Node), ##__VA_ARGS__) \
  M(ArgumentInfo, D(Node), ##__VA_ARGS__) \
    M(Type_MethodCall, D(Type) B(Node), ##__VA_ARGS__) \
      M(Type_Action, D(Type_MethodBase) B(Type) B(Node), ##__VA_ARGS__) \
      M(Method, D(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(Type_Typedef, D(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
      M(Type_Newtype, D(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
      M(Type_Extern, D(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
      M(Operation_Unary, D(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
        M(Neg, D(Operation_Unary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
        M(UPlus, D(Operation_Unary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
        M(Cmpl, D(Operation_Unary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
        M(LNot, D(Operation_Unary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
      M(Operation_Binary, D(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
      M(Operation_Ternary, D(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
        M(Operation_Relation, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
        M(Mul, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
    M(Statement, D(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(BaseAssignmentStatement, D(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
        M(OpAssignmentStatement, D(BaseAssignmentStatement) B(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
          M(MulAssign, D(OpAssignmentStatement) B(BaseAssignmentStatement) B(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
        M(Div, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(DivAssign, D(OpAssignmentStatement) B(BaseAssignmentStatement) B(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
        M(Mod, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(ModAssign, D(OpAssignmentStatement) B(BaseAssignmentStatement) B(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
        M(Add, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(AddAssign, D(OpAssignmentStatement) B(BaseAssignmentStatement) B(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
        M(Sub, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(SubAssign, D(OpAssignmentStatement) B(BaseAssignmentStatement) B(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
        M(AddSat, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(AddSatAssign, D(OpAssignmentStatement) B(BaseAssignmentStatement) B(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
        M(SubSat, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(SubSatAssign, D(OpAssignmentStatement) B(BaseAssignmentStatement) B(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
        M(Shl, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(ShlAssign, D(OpAssignmentStatement) B(BaseAssignmentStatement) B(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
        M(Shr, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(ShrAssign, D(OpAssignmentStatement) B(BaseAssignmentStatement) B(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
          M(Equ, D(Operation_Relation) B(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(Neq, D(Operation_Relation) B(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(Lss, D(Operation_Relation) B(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(Leq, D(Operation_Relation) B(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(Grt, D(Operation_Relation) B(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(Geq, D(Operation_Relation) B(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
        M(BAnd, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(BAndAssign, D(OpAssignmentStatement) B(BaseAssignmentStatement) B(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
        M(BOr, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(BOrAssign, D(OpAssignmentStatement) B(BaseAssignmentStatement) B(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
        M(BXor, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(BXorAssign, D(OpAssignmentStatement) B(BaseAssignmentStatement) B(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
        M(LAnd, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
        M(LOr, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
    M(Dots, D(Expression) B(Node), ##__VA_ARGS__) \
        M(NamedDots, D(NamedExpression) B(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
    M(Literal, D(Expression) B(Node), ##__VA_ARGS__) \
      M(Constant, D(Literal) B(Expression) B(Node), ##__VA_ARGS__) \
      M(BoolLiteral, D(Literal) B(Expression) B(Node), ##__VA_ARGS__) \
      M(StringLiteral, D(Literal) B(Expression) B(Node), ##__VA_ARGS__) \
    M(PathExpression, D(Expression) B(Node), ##__VA_ARGS__) \
    M(TypeNameExpression, D(Expression) B(Node), ##__VA_ARGS__) \
        M(AbstractSlice, D(Operation_Ternary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(Slice, D(AbstractSlice) B(Operation_Ternary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
          M(PlusSlice, D(AbstractSlice) B(Operation_Ternary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
        M(Member, D(Operation_Unary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
        M(Concat, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
        M(ArrayIndex, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
        M(Range, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
        M(Mask, D(Operation_Binary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
        M(Mux, D(Operation_Ternary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
    M(DefaultExpression, D(Expression) B(Node), ##__VA_ARGS__) \
    M(This, D(Expression) B(Node), ##__VA_ARGS__) \
        M(Cast, D(Operation_Unary) B(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
  M(SelectCase, D(Node), ##__VA_ARGS__) \
    M(SelectExpression, D(Expression) B(Node), ##__VA_ARGS__) \
    M(MethodCallExpression, D(Expression) B(Node), ##__VA_ARGS__) \
    M(ConstructorCallExpression, D(Expression) B(Node), ##__VA_ARGS__) \
    M(BaseListExpression, D(Expression) B(Node), ##__VA_ARGS__) \
      M(ListExpression, D(BaseListExpression) B(Expression) B(Node), ##__VA_ARGS__) \
      M(P4ListExpression, D(BaseListExpression) B(Expression) B(Node), ##__VA_ARGS__) \
    M(StructExpression, D(Expression) B(Node), ##__VA_ARGS__) \
    M(Invalid, D(Expression) B(Node), ##__VA_ARGS__) \
    M(InvalidHeader, D(Expression) B(Node), ##__VA_ARGS__) \
    M(InvalidHeaderUnion, D(Expression) B(Node), ##__VA_ARGS__) \
      M(HeaderStackExpression, D(BaseListExpression) B(Expression) B(Node), ##__VA_ARGS__) \
  M(ListCompileTimeValue, D(Node), ##__VA_ARGS__) \
  M(P4ListCompileTimeValue, D(Node), ##__VA_ARGS__) \
  M(StructCompileTimeValue, D(Node), ##__VA_ARGS__) \
      M(CompileTimeMethodCall, D(MethodCallExpression) B(Expression) B(Node), ##__VA_ARGS__) \
    M(SymbolicVariable, D(Expression) B(Node), ##__VA_ARGS__) \
      M(ParserState, D(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(P4Parser, D(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
      M(P4Control, D(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
      M(P4Action, D(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(Type_Error, D(Type_Declaration) B(Type) B(Node), ##__VA_ARGS__) \
  M(Declaration_MatchKind, D(Node), ##__VA_ARGS__) \
  M(PropertyValue, D(Node), ##__VA_ARGS__) \
    M(ExpressionValue, D(PropertyValue) B(Node), ##__VA_ARGS__) \
    M(ExpressionListValue, D(PropertyValue) B(Node), ##__VA_ARGS__) \
  M(ActionListElement, D(Node), ##__VA_ARGS__) \
    M(ActionList, D(PropertyValue) B(Node), ##__VA_ARGS__) \
  M(KeyElement, D(Node), ##__VA_ARGS__) \
    M(Key, D(PropertyValue) B(Node), ##__VA_ARGS__) \
  M(Entry, D(Node), ##__VA_ARGS__) \
    M(EntriesList, D(PropertyValue) B(Node), ##__VA_ARGS__) \
      M(Property, D(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
  M(TableProperties, D(Node), ##__VA_ARGS__) \
      M(P4Table, D(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(P4ValueSet, D(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(Declaration_Variable, D(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(Declaration_Constant, D(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(Declaration_Instance, D(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
  M(P4Program, D(Node), ##__VA_ARGS__) \
      M(ExitStatement, D(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(ReturnStatement, D(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(EmptyStatement, D(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
        M(AssignmentStatement, D(BaseAssignmentStatement) B(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(IfStatement, D(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(BreakStatement, D(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(ContinueStatement, D(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(BlockStatement, D(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(MethodCallStatement, D(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
  M(SwitchCase, D(Node), ##__VA_ARGS__) \
      M(SwitchStatement, D(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(LoopStatement, D(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
        M(ForStatement, D(LoopStatement) B(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
        M(ForInStatement, D(LoopStatement) B(Statement) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
      M(Function, D(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
  M(Block, D(Node), ##__VA_ARGS__) \
    M(TableBlock, D(Block) B(Node), ##__VA_ARGS__) \
    M(InstantiatedBlock, D(Block) B(Node), ##__VA_ARGS__) \
      M(ParserBlock, D(InstantiatedBlock) B(Block) B(Node), ##__VA_ARGS__) \
      M(ControlBlock, D(InstantiatedBlock) B(Block) B(Node), ##__VA_ARGS__) \
      M(PackageBlock, D(InstantiatedBlock) B(Block) B(Node), ##__VA_ARGS__) \
      M(ExternBlock, D(InstantiatedBlock) B(Block) B(Node), ##__VA_ARGS__) \
    M(ToplevelBlock, D(Block) B(Node), ##__VA_ARGS__) \
      M(Type_Block, D(Type_Base) B(Type) B(Node), ##__VA_ARGS__) \
      M(Type_Counter, D(Type_Base) B(Type) B(Node), ##__VA_ARGS__) \
      M(Type_Expression, D(Type_Base) B(Type) B(Node), ##__VA_ARGS__) \
      M(Type_FieldListCalculation, D(Type_Base) B(Type) B(Node), ##__VA_ARGS__) \
      M(Type_Meter, D(Type_Base) B(Type) B(Node), ##__VA_ARGS__) \
      M(Type_Register, D(Type_Base) B(Type) B(Node), ##__VA_ARGS__) \
      M(Type_AnyTable, D(Type_Base) B(Type) B(Node), ##__VA_ARGS__) \
  M(HeaderOrMetadata, D(Node), ##__VA_ARGS__) \
    M(Header, D(HeaderOrMetadata) B(Node), ##__VA_ARGS__) \
    M(HeaderStack, D(HeaderOrMetadata) B(Node), ##__VA_ARGS__) \
  M(v1HeaderType, D(Node), ##__VA_ARGS__) \
    M(Metadata, D(HeaderOrMetadata) B(Node), ##__VA_ARGS__) \
    M(HeaderRef, D(Expression) B(Node), ##__VA_ARGS__) \
      M(ConcreteHeaderRef, D(HeaderRef) B(Expression) B(Node), ##__VA_ARGS__) \
      M(HeaderStackItemRef, D(HeaderRef) B(Expression) B(Node), ##__VA_ARGS__) \
    M(If, D(Expression) B(Node), ##__VA_ARGS__) \
      M(NamedCond, D(If) B(Expression) B(Node), ##__VA_ARGS__) \
    M(Apply, D(Expression) B(Node), ##__VA_ARGS__) \
      M(Primitive, D(Operation) B(Expression) B(Node), ##__VA_ARGS__) \
  M(FieldList, D(Node), ##__VA_ARGS__) \
  M(FieldListCalculation, D(Node), ##__VA_ARGS__) \
  M(CalculatedField, D(Node), ##__VA_ARGS__) \
  M(ParserValueSet, D(Node), ##__VA_ARGS__) \
  M(CaseEntry, D(Node), ##__VA_ARGS__) \
  M(V1Parser, D(Node), ##__VA_ARGS__) \
  M(ParserException, D(Node), ##__VA_ARGS__) \
  M(Attached, D(Node), ##__VA_ARGS__) \
    M(Stateful, D(Attached) B(Node), ##__VA_ARGS__) \
      M(CounterOrMeter, D(Stateful) B(Attached) B(Node), ##__VA_ARGS__) \
        M(Counter, D(CounterOrMeter) B(Stateful) B(Attached) B(Node), ##__VA_ARGS__) \
        M(Meter, D(CounterOrMeter) B(Stateful) B(Attached) B(Node), ##__VA_ARGS__) \
      M(Register, D(Stateful) B(Attached) B(Node), ##__VA_ARGS__) \
  M(PrimitiveAction, D(Node), ##__VA_ARGS__) \
  M(NameList, D(Node), ##__VA_ARGS__) \
    M(ActionArg, D(Expression) B(Node), ##__VA_ARGS__) \
  M(ActionFunction, D(Node), ##__VA_ARGS__) \
    M(ActionProfile, D(Attached) B(Node), ##__VA_ARGS__) \
    M(ActionSelector, D(Attached) B(Node), ##__VA_ARGS__) \
  M(V1Table, D(Node), ##__VA_ARGS__) \
  M(V1Control, D(Node), ##__VA_ARGS__) \
    M(AttribLocal, D(Expression) B(Node), ##__VA_ARGS__) \
  M(AttribLocals, D(Node), ##__VA_ARGS__) \
      M(Attribute, D(Declaration) B(StatOrDecl) B(Node), ##__VA_ARGS__) \
    M(GlobalRef, D(Expression) B(Node), ##__VA_ARGS__) \
    M(AttributeRef, D(Expression) B(Node), ##__VA_ARGS__) \
  M(V1Program, D(Node), ##__VA_ARGS__) \
T(Vector<IR::Node>, D(Node), ##__VA_ARGS__) \
T(IndexedVector<IR::Node>, D(Vector<IR::Node>) B(Node), ##__VA_ARGS__) \
T(Vector<IR::Type>, D(Node), ##__VA_ARGS__) \
T(Vector<IR::StatOrDecl>, D(Node), ##__VA_ARGS__) \
T(IndexedVector<IR::StatOrDecl>, D(Vector<IR::StatOrDecl>) B(Node), ##__VA_ARGS__) \
T(Vector<IR::Declaration>, D(Node), ##__VA_ARGS__) \
T(IndexedVector<IR::Declaration>, D(Vector<IR::Declaration>) B(Node), ##__VA_ARGS__) \
T(Vector<IR::Expression>, D(Node), ##__VA_ARGS__) \
T(Vector<IR::NamedExpression>, D(Node), ##__VA_ARGS__) \
T(IndexedVector<IR::NamedExpression>, D(Vector<IR::NamedExpression>) B(Node), ##__VA_ARGS__) \
T(Vector<IR::AnnotationToken>, D(Node), ##__VA_ARGS__) \
T(Vector<IR::Annotation>, D(Node), ##__VA_ARGS__) \
T(Vector<IR::Argument>, D(Node), ##__VA_ARGS__) \
T(Vector<IR::Parameter>, D(Node), ##__VA_ARGS__) \
T(IndexedVector<IR::Parameter>, D(Vector<IR::Parameter>) B(Node), ##__VA_ARGS__) \
T(Vector<IR::Type_Var>, D(Node), ##__VA_ARGS__) \
T(IndexedVector<IR::Type_Var>, D(Vector<IR::Type_Var>) B(Node), ##__VA_ARGS__) \
T(Vector<IR::StructField>, D(Node), ##__VA_ARGS__) \
T(IndexedVector<IR::StructField>, D(Vector<IR::StructField>) B(Node), ##__VA_ARGS__) \
T(Vector<IR::Declaration_ID>, D(Node), ##__VA_ARGS__) \
T(IndexedVector<IR::Declaration_ID>, D(Vector<IR::Declaration_ID>) B(Node), ##__VA_ARGS__) \
T(Vector<IR::SerEnumMember>, D(Node), ##__VA_ARGS__) \
T(IndexedVector<IR::SerEnumMember>, D(Vector<IR::SerEnumMember>) B(Node), ##__VA_ARGS__) \
T(Vector<IR::ArgumentInfo>, D(Node), ##__VA_ARGS__) \
T(Vector<IR::Method>, D(Node), ##__VA_ARGS__) \
T(Vector<IR::SelectCase>, D(Node), ##__VA_ARGS__) \
T(Vector<IR::ParserState>, D(Node), ##__VA_ARGS__) \
T(IndexedVector<IR::ParserState>, D(Vector<IR::ParserState>) B(Node), ##__VA_ARGS__) \
T(Vector<IR::ActionListElement>, D(Node), ##__VA_ARGS__) \
T(IndexedVector<IR::ActionListElement>, D(Vector<IR::ActionListElement>) B(Node), ##__VA_ARGS__) \
T(Vector<IR::KeyElement>, D(Node), ##__VA_ARGS__) \
T(Vector<IR::Entry>, D(Node), ##__VA_ARGS__) \
T(Vector<IR::Property>, D(Node), ##__VA_ARGS__) \
T(IndexedVector<IR::Property>, D(Vector<IR::Property>) B(Node), ##__VA_ARGS__) \
T(Vector<IR::SwitchCase>, D(Node), ##__VA_ARGS__) \
T(Vector<IR::Primitive>, D(Node), ##__VA_ARGS__) \
T(Vector<IR::CaseEntry>, D(Node), ##__VA_ARGS__) \

namespace P4::IR {
class CompileTimeValue;
class Type;
class IMayBeGenericType;
class IApply;
class INamespace;
class ISimpleNamespace;
class IGeneralNamespace;
class INestedNamespace;
class IFunctional;
class ITypeVar;
class IContainer;
class Type_Base;
class Type_Unknown;
class StatOrDecl;
class Declaration;
class Type_Declaration;
class Expression;
class Operation;
class Path;
class NamedExpression;
class AnnotationToken;
class Annotation;
class IAnnotated;
class IInstance;
class Argument;
class Type_Any;
class Type_Fragment;
class Type_Type;
class Type_Boolean;
class Type_State;
class Type_Bits;
class Type_Varbits;
class Parameter;
class ParameterList;
class Type_Var;
class Type_InfInt;
class Type_Dontcare;
class Type_Void;
class Type_MatchKind;
class TypeParameters;
class StructField;
class Type_StructLike;
class Type_Struct;
class Type_UnknownStruct;
class Type_HeaderUnion;
class Type_Header;
class Type_Set;
class Type_Indexed;
class Type_BaseList;
class Type_List;
class Type_Tuple;
class Type_P4List;
class Type_ArchBlock;
class Type_Package;
class Type_Parser;
class Type_Control;
class Type_Name;
class Type_Array;
class Type_Specialized;
class Type_SpecializedCanonical;
class Declaration_ID;
class Type_String;
class Type_Enum;
class SerEnumMember;
class Type_SerEnum;
class Type_Table;
class Type_ActionEnum;
class Type_MethodBase;
class Type_Method;
class ArgumentInfo;
class Type_MethodCall;
class Type_Action;
class Method;
class Type_Typedef;
class Type_Newtype;
class Type_Extern;
class Operation_Unary;
class Neg;
class UPlus;
class Cmpl;
class LNot;
class Operation_Binary;
class Operation_Ternary;
class Operation_Relation;
class Mul;
class Statement;
class BaseAssignmentStatement;
class OpAssignmentStatement;
class MulAssign;
class Div;
class DivAssign;
class Mod;
class ModAssign;
class Add;
class AddAssign;
class Sub;
class SubAssign;
class AddSat;
class AddSatAssign;
class SubSat;
class SubSatAssign;
class Shl;
class ShlAssign;
class Shr;
class ShrAssign;
class Equ;
class Neq;
class Lss;
class Leq;
class Grt;
class Geq;
class BAnd;
class BAndAssign;
class BOr;
class BOrAssign;
class BXor;
class BXorAssign;
class LAnd;
class LOr;
class Dots;
class NamedDots;
class Literal;
class Constant;
class BoolLiteral;
class StringLiteral;
class PathExpression;
class TypeNameExpression;
class AbstractSlice;
class Slice;
class PlusSlice;
class Member;
class Concat;
class ArrayIndex;
class Range;
class Mask;
class Mux;
class DefaultExpression;
class This;
class Cast;
class SelectCase;
class SelectExpression;
class MethodCallExpression;
class ConstructorCallExpression;
class BaseListExpression;
class ListExpression;
class P4ListExpression;
class StructExpression;
class Invalid;
class InvalidHeader;
class InvalidHeaderUnion;
class HeaderStackExpression;
class ListCompileTimeValue;
class P4ListCompileTimeValue;
class StructCompileTimeValue;
class CompileTimeMethodCall;
class SymbolicVariable;
class ParserState;
class P4Parser;
class P4Control;
class P4Action;
class Type_Error;
class Declaration_MatchKind;
class PropertyValue;
class ExpressionValue;
class ExpressionListValue;
class ActionListElement;
class ActionList;
class KeyElement;
class Key;
class Entry;
class EntriesList;
class Property;
class TableProperties;
class P4Table;
class P4ValueSet;
class Declaration_Variable;
class Declaration_Constant;
class Declaration_Instance;
class P4Program;
class ExitStatement;
class ReturnStatement;
class EmptyStatement;
class AssignmentStatement;
class IfStatement;
class BreakStatement;
class ContinueStatement;
class BlockStatement;
class MethodCallStatement;
class SwitchCase;
class SwitchStatement;
class LoopStatement;
class ForStatement;
class ForInStatement;
class Function;
class Block;
class TableBlock;
class InstantiatedBlock;
class ParserBlock;
class ControlBlock;
class PackageBlock;
class ExternBlock;
class ToplevelBlock;
class Type_Block;
class Type_Counter;
class Type_Expression;
class Type_FieldListCalculation;
class Type_Meter;
class Type_Register;
class Type_AnyTable;
class HeaderOrMetadata;
class Header;
class HeaderStack;
class v1HeaderType;
class Metadata;
class HeaderRef;
class ConcreteHeaderRef;
class HeaderStackItemRef;
class If;
class NamedCond;
class Apply;
class Primitive;
class FieldList;
class FieldListCalculation;
class CalculatedField;
class ParserValueSet;
class CaseEntry;
class V1Parser;
class ParserException;
class Attached;
class Stateful;
class CounterOrMeter;
class Counter;
class Meter;
class Register;
class PrimitiveAction;
class NameList;
class ActionArg;
class ActionFunction;
class ActionProfile;
class ActionSelector;
class V1Table;
class V1Control;
class AttribLocal;
class AttribLocals;
class Attribute;
class GlobalRef;
class AttributeRef;
class V1Program;

enum class NodeKind : RTTI::TypeId {
  Auto = 0,
  INode = 1,
  Node = 2,
  CompileTimeValue = 3,
  Type = 4,
  IMayBeGenericType = 5,
  IApply = 6,
  INamespace = 7,
  ISimpleNamespace = 8,
  IGeneralNamespace = 9,
  INestedNamespace = 10,
  IFunctional = 11,
  ITypeVar = 12,
  IContainer = 13,
  Type_Base = 14,
  Type_Unknown = 15,
  StatOrDecl = 16,
  Declaration = 17,
  Type_Declaration = 18,
  Expression = 19,
  Operation = 20,
  Path = 21,
  NamedExpression = 22,
  AnnotationToken = 23,
  Annotation = 24,
  IAnnotated = 25,
  IInstance = 26,
  Argument = 27,
  Type_Any = 28,
  Type_Fragment = 29,
  Type_Type = 30,
  Type_Boolean = 31,
  Type_State = 32,
  Type_Bits = 33,
  Type_Varbits = 34,
  Parameter = 35,
  ParameterList = 36,
  Type_Var = 37,
  Type_InfInt = 38,
  Type_Dontcare = 39,
  Type_Void = 40,
  Type_MatchKind = 41,
  TypeParameters = 42,
  StructField = 43,
  Type_StructLike = 44,
  Type_Struct = 45,
  Type_UnknownStruct = 46,
  Type_HeaderUnion = 47,
  Type_Header = 48,
  Type_Set = 49,
  Type_Indexed = 50,
  Type_BaseList = 51,
  Type_List = 52,
  Type_Tuple = 53,
  Type_P4List = 54,
  Type_ArchBlock = 55,
  Type_Package = 56,
  Type_Parser = 57,
  Type_Control = 58,
  Type_Name = 59,
  Type_Array = 60,
  Type_Specialized = 61,
  Type_SpecializedCanonical = 62,
  Declaration_ID = 63,
  Type_String = 64,
  Type_Enum = 65,
  SerEnumMember = 66,
  Type_SerEnum = 67,
  Type_Table = 68,
  Type_ActionEnum = 69,
  Type_MethodBase = 70,
  Type_Method = 71,
  ArgumentInfo = 72,
  Type_MethodCall = 73,
  Type_Action = 74,
  Method = 75,
  Type_Typedef = 76,
  Type_Newtype = 77,
  Type_Extern = 78,
  Operation_Unary = 79,
  Neg = 80,
  UPlus = 81,
  Cmpl = 82,
  LNot = 83,
  Operation_Binary = 84,
  Operation_Ternary = 85,
  Operation_Relation = 86,
  Mul = 87,
  Statement = 88,
  BaseAssignmentStatement = 89,
  OpAssignmentStatement = 90,
  MulAssign = 91,
  Div = 92,
  DivAssign = 93,
  Mod = 94,
  ModAssign = 95,
  Add = 96,
  AddAssign = 97,
  Sub = 98,
  SubAssign = 99,
  AddSat = 100,
  AddSatAssign = 101,
  SubSat = 102,
  SubSatAssign = 103,
  Shl = 104,
  ShlAssign = 105,
  Shr = 106,
  ShrAssign = 107,
  Equ = 108,
  Neq = 109,
  Lss = 110,
  Leq = 111,
  Grt = 112,
  Geq = 113,
  BAnd = 114,
  BAndAssign = 115,
  BOr = 116,
  BOrAssign = 117,
  BXor = 118,
  BXorAssign = 119,
  LAnd = 120,
  LOr = 121,
  Dots = 122,
  NamedDots = 123,
  Literal = 124,
  Constant = 125,
  BoolLiteral = 126,
  StringLiteral = 127,
  PathExpression = 128,
  TypeNameExpression = 129,
  AbstractSlice = 130,
  Slice = 131,
  PlusSlice = 132,
  Member = 133,
  Concat = 134,
  ArrayIndex = 135,
  Range = 136,
  Mask = 137,
  Mux = 138,
  DefaultExpression = 139,
  This = 140,
  Cast = 141,
  SelectCase = 142,
  SelectExpression = 143,
  MethodCallExpression = 144,
  ConstructorCallExpression = 145,
  BaseListExpression = 146,
  ListExpression = 147,
  P4ListExpression = 148,
  StructExpression = 149,
  Invalid = 150,
  InvalidHeader = 151,
  InvalidHeaderUnion = 152,
  HeaderStackExpression = 153,
  ListCompileTimeValue = 154,
  P4ListCompileTimeValue = 155,
  StructCompileTimeValue = 156,
  CompileTimeMethodCall = 157,
  SymbolicVariable = 158,
  ParserState = 159,
  P4Parser = 160,
  P4Control = 161,
  P4Action = 162,
  Type_Error = 163,
  Declaration_MatchKind = 164,
  PropertyValue = 165,
  ExpressionValue = 166,
  ExpressionListValue = 167,
  ActionListElement = 168,
  ActionList = 169,
  KeyElement = 170,
  Key = 171,
  Entry = 172,
  EntriesList = 173,
  Property = 174,
  TableProperties = 175,
  P4Table = 176,
  P4ValueSet = 177,
  Declaration_Variable = 178,
  Declaration_Constant = 179,
  Declaration_Instance = 180,
  P4Program = 181,
  ExitStatement = 182,
  ReturnStatement = 183,
  EmptyStatement = 184,
  AssignmentStatement = 185,
  IfStatement = 186,
  BreakStatement = 187,
  ContinueStatement = 188,
  BlockStatement = 189,
  MethodCallStatement = 190,
  SwitchCase = 191,
  SwitchStatement = 192,
  LoopStatement = 193,
  ForStatement = 194,
  ForInStatement = 195,
  Function = 196,
  Block = 197,
  TableBlock = 198,
  InstantiatedBlock = 199,
  ParserBlock = 200,
  ControlBlock = 201,
  PackageBlock = 202,
  ExternBlock = 203,
  ToplevelBlock = 204,
  Type_Block = 205,
  Type_Counter = 206,
  Type_Expression = 207,
  Type_FieldListCalculation = 208,
  Type_Meter = 209,
  Type_Register = 210,
  Type_AnyTable = 211,
  HeaderOrMetadata = 212,
  Header = 213,
  HeaderStack = 214,
  v1HeaderType = 215,
  Metadata = 216,
  HeaderRef = 217,
  ConcreteHeaderRef = 218,
  HeaderStackItemRef = 219,
  If = 220,
  NamedCond = 221,
  Apply = 222,
  Primitive = 223,
  FieldList = 224,
  FieldListCalculation = 225,
  CalculatedField = 226,
  ParserValueSet = 227,
  CaseEntry = 228,
  V1Parser = 229,
  ParserException = 230,
  Attached = 231,
  Stateful = 232,
  CounterOrMeter = 233,
  Counter = 234,
  Meter = 235,
  Register = 236,
  PrimitiveAction = 237,
  NameList = 238,
  ActionArg = 239,
  ActionFunction = 240,
  ActionProfile = 241,
  ActionSelector = 242,
  V1Table = 243,
  V1Control = 244,
  AttribLocal = 245,
  AttribLocals = 246,
  Attribute = 247,
  GlobalRef = 248,
  AttributeRef = 249,
  V1Program = 250,
  IDeclaration = 251,
  VectorBase = 252
};
enum class NodeDiscriminator : RTTI::TypeId {
  NodeT = UINT64_C(1),
  VectorT = UINT64_C(1),
  IndexedVectorT = UINT64_C(2),
  Auto = UINT64_C(0xFF)
};
 inline bool operator==(RTTI::TypeId lhs, NodeKind rhs) { return lhs == RTTI::TypeId(rhs); }
 inline bool operator==(NodeKind lhs, RTTI::TypeId rhs) { return RTTI::TypeId(lhs) == rhs; }
 inline bool operator!=(RTTI::TypeId lhs, NodeKind rhs) { return lhs != RTTI::TypeId(rhs); }
 inline bool operator!=(NodeKind lhs, RTTI::TypeId rhs) { return RTTI::TypeId(lhs) != rhs; }
 inline bool operator==(RTTI::TypeId lhs, NodeDiscriminator rhs) { return lhs == RTTI::TypeId(rhs); }
 inline bool operator==(NodeDiscriminator lhs, RTTI::TypeId rhs) { return RTTI::TypeId(lhs) == rhs; }
 inline bool operator!=(RTTI::TypeId lhs, NodeDiscriminator rhs) { return lhs != RTTI::TypeId(rhs); }
 inline bool operator!=(NodeDiscriminator lhs, RTTI::TypeId rhs) { return RTTI::TypeId(lhs) != rhs; }
}  // namespace P4::IR
