/****************************************************************************
**
** Copyright (C) 2021 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtLanguageServer module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

// this file was generated by the generate.ts script

#ifndef QLSPNOTIFYSIGNALS_P_H
#define QLSPNOTIFYSIGNALS_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an

//
// We mean it.
//

#include <QtLanguageServer/private/qlanguageserverprotocol_p.h>

QT_BEGIN_NAMESPACE

class Q_LANGUAGESERVER_EXPORT QLspNotifySignals : public QObject
{
    Q_OBJECT
public:
    QLspNotifySignals(QObject *parent = nullptr) : QObject(parent) { }
    void registerHandlers(QLanguageServerProtocol *protocol);
signals:
    void receivedCancelNotification(const QLspSpecification::Notifications::CancelParamsType &);
    void receivedInitializedNotification(
            const QLspSpecification::Notifications::InitializedParamsType &);
    void receivedExitNotification(const QLspSpecification::Notifications::ExitParamsType &);
    void receivedLogTraceNotification(const QLspSpecification::Notifications::LogTraceParamsType &);
    void receivedSetTraceNotification(const QLspSpecification::Notifications::SetTraceParamsType &);
    void receivedShowMessageNotification(
            const QLspSpecification::Notifications::ShowMessageParamsType &);
    void
    receivedLogMessageNotification(const QLspSpecification::Notifications::LogMessageParamsType &);
    void receivedWorkDoneProgressCancelNotification(
            const QLspSpecification::Notifications::WorkDoneProgressCancelParamsType &);
    void receivedTelemetryEventNotification(
            const QLspSpecification::Notifications::TelemetryEventParamsType &);
    void receivedDidChangeWorkspaceFoldersNotification(
            const QLspSpecification::Notifications::DidChangeWorkspaceFoldersParamsType &);
    void receivedDidChangeConfigurationNotification(
            const QLspSpecification::Notifications::DidChangeConfigurationParamsType &);
    void receivedDidChangeWatchedFilesNotification(
            const QLspSpecification::Notifications::DidChangeWatchedFilesParamsType &);
    void receivedCreateFilesNotification(
            const QLspSpecification::Notifications::CreateFilesParamsType &);
    void receivedRenameFilesNotification(
            const QLspSpecification::Notifications::RenameFilesParamsType &);
    void receivedDeleteFilesNotification(
            const QLspSpecification::Notifications::DeleteFilesParamsType &);
    void receivedDidOpenTextDocumentNotification(
            const QLspSpecification::Notifications::DidOpenTextDocumentParamsType &);
    void receivedDidChangeTextDocumentNotification(
            const QLspSpecification::Notifications::DidChangeTextDocumentParamsType &);
    void receivedWillSaveTextDocumentNotification(
            const QLspSpecification::Notifications::WillSaveTextDocumentParamsType &);
    void receivedDidSaveTextDocumentNotification(
            const QLspSpecification::Notifications::DidSaveTextDocumentParamsType &);
    void receivedDidCloseTextDocumentNotification(
            const QLspSpecification::Notifications::DidCloseTextDocumentParamsType &);
    void receivedPublishDiagnosticsNotification(
            const QLspSpecification::Notifications::PublishDiagnosticsParamsType &);
};

QT_END_NAMESPACE

#endif // QLSPNOTIFYSIGNALS_P_H