// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMASHAREDPOINTERLINETYPE_H
        #define RECMASHAREDPOINTERLINETYPE_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RLinetype.h"
            
            typedef QSharedPointer<RLinetype> RLinetypePointer;
        

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaSharedPointerLinetype {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRObject(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDescription
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDescription
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPatternString
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPatternString
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSelectedForPropertyEditing
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPattern
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPattern
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        equals
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        operator_not_assign
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        operator_less
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        print
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RLinetype* getSelf(const QString& fName, QScriptContext* context)
    ;static RLinetype* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue data
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue isNull
    (QScriptContext *context, QScriptEngine *engine)
    ;};
    #endif
    