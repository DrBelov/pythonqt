/****************************************************************************
**
** Copyright (C) 2008-2009 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the Qt Script Generator project on Qt Labs.
**
** $QT_BEGIN_LICENSE:LGPL$
** No Commercial Usage
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the Technology Preview License Agreement accompanying
** this package.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/


#ifndef CODEMODEL_FWD_H
#define CODEMODEL_FWD_H

#include <QtCore/QList>
#include <QSharedPointer>

// forward declarations
class CodeModel;
class _ArgumentModelItem;
class _ClassModelItem;
class _CodeModelItem;
class _EnumModelItem;
class _EnumeratorModelItem;
class _FileModelItem;
class _FunctionDefinitionModelItem;
class _FunctionModelItem;
class _NamespaceModelItem;
class _ScopeModelItem;
class _TemplateParameterModelItem;
class _TypeAliasModelItem;
class _VariableModelItem;
class _MemberModelItem;
struct TypeInfo;

typedef QSharedPointer<_ArgumentModelItem> ArgumentModelItem;
typedef QSharedPointer<_ClassModelItem> ClassModelItem;
typedef QSharedPointer<_CodeModelItem> CodeModelItem;
typedef QSharedPointer<_EnumModelItem> EnumModelItem;
typedef QSharedPointer<_EnumeratorModelItem> EnumeratorModelItem;
typedef QSharedPointer<_FileModelItem> FileModelItem;
typedef QSharedPointer<_FunctionDefinitionModelItem> FunctionDefinitionModelItem;
typedef QSharedPointer<_FunctionModelItem> FunctionModelItem;
typedef QSharedPointer<_NamespaceModelItem> NamespaceModelItem;
typedef QSharedPointer<_ScopeModelItem> ScopeModelItem;
typedef QSharedPointer<_TemplateParameterModelItem> TemplateParameterModelItem;
typedef QSharedPointer<_TypeAliasModelItem> TypeAliasModelItem;
typedef QSharedPointer<_VariableModelItem> VariableModelItem;
typedef QSharedPointer<_MemberModelItem> MemberModelItem;

typedef QList<ArgumentModelItem> ArgumentList;
typedef QList<ClassModelItem> ClassList;
typedef QList<CodeModelItem> ItemList;
typedef QList<EnumModelItem> EnumList;
typedef QList<EnumeratorModelItem> EnumeratorList;
typedef QList<FileModelItem> FileList;
typedef QList<FunctionDefinitionModelItem> FunctionDefinitionList;
typedef QList<FunctionModelItem> FunctionList;
typedef QList<NamespaceModelItem> NamespaceList;
typedef QList<ScopeModelItem> ScopeList;
typedef QList<TemplateParameterModelItem> TemplateParameterList;
typedef QList<TypeAliasModelItem> TypeAliasList;
typedef QList<VariableModelItem> VariableList;
typedef QList<MemberModelItem> MemberList;

#endif // CODEMODEL_FWD_H
